#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compara(char a, char b){return a < b;}

int main()
{
    int n;
    bool trapaceiro;
    string dieta, cafe, almoco;
    cin >> n >> ws;
    while (n--)
    {
        trapaceiro = false;
        getline(cin, dieta);
        getline(cin, cafe);
        getline(cin, almoco);
        for(int i = 0; i < cafe.size(); i++)
        {
            int p = dieta.find(cafe[i]);
            if(p != string::npos)
            {
                dieta.erase(p,1);
            }
            else
            {
                trapaceiro = true;
                i = cafe.size();
            }
        }
        for(int i = 0; i < almoco.size(); i++)
        {
            int p = dieta.find(almoco[i]);
            if(p != string::npos)
            {
                dieta.erase(p,1);
            }
            else
            {
                trapaceiro = true;
                i = almoco.size();
            }
        }
        if(trapaceiro)
        {
            cout << "CHEATER" << endl;
        }
        else
        {
            sort(dieta.begin(), dieta.end(), compara);
            cout << dieta << endl;
        }
    }
    return 0;
}


#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    char c;
    string valor;
    vector <int> posicoes;
    while(cin >> c >> valor && c!= '0')
    {
        for(int i = 0; i < valor.size(); i++)
        {
            if(valor[i] == c)
            {
                valor.erase(i,1);
                i = -1;
            }
        }
        while(valor.size() > 1 && valor[0] == '0')
        {
            valor.erase(0,1);
        }
        if(valor.size() == 0)
        {
            cout << "0" << endl;
        }
        else
        {
        cout << valor << endl;
        }
        valor.clear();

    }


}


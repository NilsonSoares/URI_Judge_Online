#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    bool encaixa = true;
    string a, b;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if(a.size() >= b.size())
        {
            for(int j = b.size()-1, k = a.size()-1; j >= 0 && k >= 0; j--, k--)
            {
                if(b[j] != a[k])
                {
                    encaixa = false;
                    j = -1;
                }
            }
        }
        else
        {
            encaixa = false;
        }
        if(encaixa == true)
        {
            cout << "encaixa" << endl;
        }
        else
        {
            cout << "nao encaixa" << endl;
        }
        encaixa = true;
    }
    return 0;
}


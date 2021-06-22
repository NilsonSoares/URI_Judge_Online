#include <iostream>
#include <string>
using namespace std;

int main()
{
    string texto, aux = "";
    while(getline(cin, texto))
    {
        int cont1 = 0, cont2 = 0;
        for(int i = 0; i < texto.size(); i++)
        {
            if(texto[i] == '_')
            {
                if(cont1 == 0)
                {
                    cont1++;
                    aux += "<i>";
                }
                else
                {
                    cont1--;
                    aux += "</i>";
                }
            }
            else if(texto[i] == '*')
            {
                if(cont2 == 0)
                {
                    cont2++;
                    aux += "<b>";
                }
                else
                {
                    cont2--;
                    aux += "</b>";
                }
            }
            else
            {
                aux.push_back(texto[i]);
            }
        }
        cout << aux << endl;
        aux = "";
    }
    return 0;
}


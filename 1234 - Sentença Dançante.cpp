#include <iostream>
#include <ctype.h>
#include <cstdio>
using namespace std;

int main()
{
    string texto;

    while (getline(cin,texto) && texto != "")
    {
        int t = 1, k;
        while (t)
        {
            for(int i = 0; i < texto.size(); i++)
            {
                if(isalpha(texto[i]))
                {
                    k = i;
                    i = texto.size();
                    t = 0;
                }
            }
        }
        texto[k] = toupper(texto[k]);
        for(int i = k+1, j = k; i < texto.size(); i++)
        {
            if(isalpha(texto[i]))
            {
                if(isupper(texto[j]))
                {
                    texto[i] = tolower(texto[i]);
                    j = i;
                }
                else if(islower(texto[j]))
                {
                    texto[i] = toupper(texto[i]);
                    j = i;
                }
            }
        }
        cout << texto << endl;
    }
    return 0;
}


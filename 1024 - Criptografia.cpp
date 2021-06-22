#include <iostream>
#include <string>
using namespace std;

string inverte (string nome)
{
    int tam = nome.length();
    char temp;
    for (int i = 0, j = tam - 1; i <= (tam/2)&& j >=(tam/2); i++ , j--)
    {
        temp = nome[i];
        nome[i] = nome[j];
        nome[j] = temp;
    }
    return nome;
}

int main()
{
    int tam;
    string nome;
    long int numtestes;
    cin >> numtestes;
    for (int i = 0; i < numtestes; i++)
    {
        cin >> ws;
        getline(cin, nome);
        tam = nome.length();
        for(int j = 0; j < tam; j++)
        {
            if((nome[j] >= 65)&&(nome[j] <= 90)|| (nome[j] >= 97)&&(nome[j] <= 122))
            {
                nome[j] = nome[j] + 3;
            }
        }
        nome = inverte(nome);
        tam = nome.length();
        for(int k = ((tam)/2); k < tam; k++)
        {
            nome[k] = nome[k] - 1;
        }
        cout << nome << endl;
    }
    return 0;
}


#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int m,n;
    long long int valor, total;
    string descricao, chave, aux;
    map<string,long long int> dicionario;
    map<string,long long int>::iterator it;
    cin >> m >> n >> ws;
    while(m--)
    {
        cin >> chave >> valor >> ws;
        dicionario[chave] = valor;
    }
    while(n--)
    {
        total = 0;
        descricao.clear();
        while(getline(cin, aux) && aux != ".")
        {
            descricao += aux + "\n";
        }
        for(it = dicionario.begin(); it != dicionario.end(); it++)
        {
            int pos = descricao.find(it->first);
            while(pos != string::npos)
            {
                total += it->second;
                pos = descricao.find(it->first, pos + (it->first).size());
            }
        }
        cout << total << endl;
    }
    return 0;
}


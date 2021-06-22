#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    int n, x, soma = 0;
    string aux;
    vector<int> numero;
    vector<int>::iterator it;
    while(cin >> n)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> ws;
            aux = cin.get();
            x = atoi(aux.c_str());
            numero.push_back(x);
        }
        for(int j = 0; j < n; j++)
        {
            soma += numero[j];
        }
        if(soma%3 == 0)
        {
            cout << soma << " sim" << endl;
        }
        else
        {
            cout << soma << " nao" << endl;
        }
        soma = 0;
        numero.clear();
    }


    return 0;
}


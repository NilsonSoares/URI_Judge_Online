#include <iostream>
#include <string>
#include <cstdio>
#include <sstream>
using namespace std;

int main()
{
    int n, tam;
    string palavra;
    stringstream ss;
    getline(cin,palavra);
    ss << palavra;
    ss >> n;
    for(int i = 0; i < n; i++)
    {
        getline(cin,palavra);
        tam = palavra.size();
        for(int j = (tam/2)-1; j >= 0; j--)
        {
            cout << palavra[j];
        }
        for(int j = tam-1; j >= tam/2; j--)
        {
            cout << palavra[j];
        }
        cout << endl;
    }
    return 0;
}


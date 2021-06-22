#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    double dist = 0, media, aux;
    int cont = 0;
    string nome;
    while (getline(cin, nome))
    {
        cin >> aux >> ws;
        cont++;
        dist+=aux;
    }
    media = dist/cont;
    cout << setiosflags(ios::fixed) << setprecision(1);
    cout << media << endl;
    return 0;
}


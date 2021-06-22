#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int n, s =0, a = 0, b = 0, s1 = 0, b1 = 0, a1 = 0, aux;
    string nome;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
     cin >> nome;
     cin >> aux; s +=aux;
     cin >> aux; b +=aux;
     cin >> aux; a +=aux;
     cin >> aux; s1 +=aux;
     cin >> aux; b1 +=aux;
     cin >> aux; a1 +=aux;
    }
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << "Pontos de Saque: " << ((s1*100)/(float)s) << " %." << endl;
    cout << "Pontos de Bloqueio: " << ((b1*100)/(float)b) << " %." << endl;
    cout << "Pontos de Ataque: " << ((a1*100)/(float)a) << " %." << endl;

    return 0;
}


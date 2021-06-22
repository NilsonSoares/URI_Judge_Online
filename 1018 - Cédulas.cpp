#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long int valor, n, cem, cinquenta, vinte, dez, cinco, dois, um;
    cin >> n;
    valor = n;
    cem = (int) n/100;
    n = n%100;
    cinquenta = (int) n/50;
    n = n%50;
    vinte = (int) n/20;
    n = n%20;
    dez = (int) n/10;
    n = n%10;
    cinco = (int) n/5;
    n = n%5;
    dois = (int) n/2;
    n = n%2;
    um = (int) n;
    cout << valor << endl;
    cout << cem << " nota(s) de R$ 100,00" << endl;
    cout << cinquenta << " nota(s) de R$ 50,00" << endl;
    cout << vinte << " nota(s) de R$ 20,00" << endl;
    cout << dez << " nota(s) de R$ 10,00" << endl;
    cout << cinco << " nota(s) de R$ 5,00" << endl;
    cout << dois << " nota(s) de R$ 2,00" << endl;
    cout << um << " nota(s) de R$ 1,00" << endl;
    return 0;
}


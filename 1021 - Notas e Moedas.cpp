#include <iostream>
using namespace std;

int main()
{
    long long int valorint;
    long double valor;
    cin >> valor;
    valorint = (long long int) (valor * 100);
    cout << "NOTAS:" << endl;
    cout << (valorint / 10000) << " nota(s) de R$ 100.00" << endl;
    valorint = valorint % 10000;
    cout << (valorint / 5000) << " nota(s) de R$ 50.00" << endl;
    valorint = valorint % 5000;
    cout << (valorint / 2000) << " nota(s) de R$ 20.00" << endl;
    valorint = valorint % 2000;
    cout << (valorint / 1000) << " nota(s) de R$ 10.00" << endl;
    valorint = valorint % 1000;
    cout << (valorint / 500) << " nota(s) de R$ 5.00" << endl;
    valorint = valorint % 500;
    cout << (valorint / 200) << " nota(s) de R$ 2.00" << endl;
    valorint = valorint % 200;
    cout << "MOEDAS:" << endl;
    cout << (valorint / 100) << " moeda(s) de R$ 1.00" << endl;
    valorint = valorint % 100;
    cout << (valorint / 50) << " moeda(s) de R$ 0.50" << endl;
    valorint = valorint % 50;
    cout << (valorint / 25) << " moeda(s) de R$ 0.25" << endl;
    valorint = valorint % 25;
    cout << (valorint / 10) << " moeda(s) de R$ 0.10" << endl;
    valorint = valorint % 10;
    cout << (valorint / 5) << " moeda(s) de R$ 0.05" << endl;
    valorint = valorint % 5;
    cout << valorint << " moeda(s) de R$ 0.01" << endl;

    return 0;
}


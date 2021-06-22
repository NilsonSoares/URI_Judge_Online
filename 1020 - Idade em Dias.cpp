#include <iostream>
using namespace std;

int main()
{
    int idade, ano, mes, dia;
    cin >> idade;
    ano = idade / 365;
    idade = idade % 365;
    mes = idade / 30;
    idade = idade % 30;
    dia = idade;
    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;
    return 0;
}


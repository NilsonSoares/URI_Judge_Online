#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num, horas;
    float valor, salario;
    cin >> num >> horas >> valor;
    salario = horas * valor;
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$ " << salario << endl;

    return 0;
}


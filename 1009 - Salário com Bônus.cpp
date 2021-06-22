#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string nome;
    double salfixo, montante, salario;
    getline(cin, nome);
    cin >> salfixo >> montante;
    salario = salfixo + ((montante * 15) / 100);
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << "TOTAL = R$ " << salario << endl;
    return 0;
}


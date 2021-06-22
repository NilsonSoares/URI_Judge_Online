#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int codigo, qtd;
    float valor, total = 0;
    cin >> codigo >> qtd >> valor;
    total = qtd * valor;
    cin >> codigo >> qtd >> valor;
    total = total + (qtd * valor);
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;
    return 0;
}


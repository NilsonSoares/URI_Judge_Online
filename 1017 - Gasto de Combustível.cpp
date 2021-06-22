#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int tempo, velocidade;
    float distancia, litros;
    cin >> tempo >> velocidade;
    distancia = tempo * velocidade;
    litros = distancia / 12;
    cout << setiosflags(ios::fixed) << setprecision(3);
    cout << litros << endl;
    return 0;
}


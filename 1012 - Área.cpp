#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double a, b, c;
    cin >> a >> b >> c;
    cout << setiosflags(ios::fixed) << setprecision(3);
    cout << "TRIANGULO: " << (a * c)/2 << endl;
    cout << "CIRCULO: " << PI * c * c << endl;
    cout << "TRAPEZIO: " << ((a + b) * c) / 2 << endl;
    cout << "QUADRADO: " << b * b << endl;
    cout << "RETANGULO: " << a * b << endl;
    return 0;
}


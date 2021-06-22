#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, delta, x1, x2;
    cin >> a >> b >> c;
    delta = (b*b)-4*a*c;
    if(delta < 0 || a == 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        x1 = (b*-1 + sqrt(delta))/(2*a);
        x2 = (b*-1 - sqrt(delta))/(2*a);
        cout << setiosflags(ios::fixed) << setprecision(5);
        cout << "R1 = " << x1 << endl;
        cout << "R2 = " << x2 << endl;
    }
    return 0;
}


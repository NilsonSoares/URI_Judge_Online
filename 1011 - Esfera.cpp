#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double r, volume;
    cin >> r;
    volume = ((4/3.0) * PI * r * r * r);
    cout << setiosflags(ios::fixed) << setprecision(3);
    cout << "VOLUME = " << volume << endl;
    return 0;
}


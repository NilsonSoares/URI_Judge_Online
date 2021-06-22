#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.14159265
using namespace std;

int main()
{
    double lp,lq,di,rad108, rad63;
    while(cin >> lp)
    {
        rad108 = (108*M_PI)/180;
        rad63 = (63*M_PI)/180;
        lq = (lp*sin(rad108))/sin(rad63);
        cout << setiosflags(ios::fixed) << setprecision(10);
        cout << lq << endl;
    }
    return 0;
}


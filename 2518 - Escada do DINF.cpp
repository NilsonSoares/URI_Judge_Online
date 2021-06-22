#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float n, h, l, c;
    float hip, area;
    while(cin >> n)
    {
        cin >> h >> c >> l;
        h = h/100;
        c = c/100;
        l = l/100;
        hip = sqrt(pow(h,2) + pow(c,2));
        area = (l*hip*n);
        cout << setiosflags(ios::fixed) << setprecision(4);
        cout << area << endl;
    }

    return 0;
}


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, media;
    cin >> a >> b >> c;
    media = ((a * 2) + (b * 3) + (c * 5)) / 10;
    cout << setiosflags(ios::fixed) << setprecision(1) << "MEDIA = " << media << endl;
    return 0;
}


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, res;
    while(cin >> n && n!=0)
    {
        res = (2*pow(n,3)+3*pow(n,2)+n)/6;
        cout << res << endl;
    }

    return 0;
}



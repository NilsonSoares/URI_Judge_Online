#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long int a;
    int c,n;
    cin >> c;
    for(int i = 0; i < c; i++)
    {
        cin >> n;
        a = ((pow(2, n))/12000);
        cout << a << " kg" << endl;
    }

    return 0;
}


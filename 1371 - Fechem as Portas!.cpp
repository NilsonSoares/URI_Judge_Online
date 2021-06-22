#include <iostream>
using namespace std;

int main()
{
    long long int n;
    while(cin >> n && n != 0)
    {
        cout << 1;
        for(int i = 2; (i*i)<= n; i++)
        {
            if((i*i) <= n)
            cout << " " << i*i;
        }
        cout << endl;
    }
    return 0;
}


#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
    long long int a, b;
    while(scanf("%lld%lld", &a,&b)!= EOF)
    {
        if(a == b)
        {
            cout << 0 << endl;
        }
        else if(a > b)
        {
            cout << (long long int)(a-b) << endl;
        }
        else
        {
            cout << (long long int)(b-a) << endl;
        }
    }
    return 0;
}


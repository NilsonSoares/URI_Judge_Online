#include <iostream>
using namespace std;

int main()
{
    long long int fib[47];
    int n;
    fib[0] = 0;
    fib[1] = 1;
    cin >> n;
    for(int i = 2; i <n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    for(int i = 0; i < n-1; i++)
    {
        cout << fib[i] << " ";
    }
    cout << fib[n-1] << "\n";

    return 0;
}


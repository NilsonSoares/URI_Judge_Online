#include <iostream>
using namespace std;

long long int fatorial (int n)
{
    if (n == 0)
        return 1;
    return n * fatorial(n-1);
}

int main()
{
   long long int n, m, fat;

    while (cin >> m >> n)
    {
        fat = fatorial(m) + fatorial(n);
        cout << fat << endl;
    }
    return 0;
}


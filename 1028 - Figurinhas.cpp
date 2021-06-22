#include <iostream>
using namespace std;

int mdc(int a, int b)
{
    int resto;
    do {
        resto = a % b;

        a = b;
        b = resto;

    } while (resto != 0);

    return a;
}

int main()
{
    int n, a, b;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << mdc(a, b) << endl;
    }

    return 0;
}


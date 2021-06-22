#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    long long int num, raiz;
    bool primo;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        primo = true;
        cin >> num;
        raiz = sqrt(num) + 1;
        for(int j = 2; j <= raiz; j++)
        {
            if(num%j == 0)
            {
                primo = false;
                j = raiz+1;
            }
        }
        if(primo || num == 2)
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not Prime" << endl;
        }
    }
    return 0;
}


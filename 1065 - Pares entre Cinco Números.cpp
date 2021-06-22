#include <iostream>
using namespace std;

int main()
{
    int n, cont  = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> n;
        if(n%2 == 0)
        {
            cont++;
        }
    }
    cout << cont << " valores pares" << endl;
    return 0;
}


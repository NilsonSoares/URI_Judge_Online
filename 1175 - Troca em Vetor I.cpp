#include <iostream>
using namespace std;

int main()
{
    int X[20], temp;
    for(int i = 0; i < 20; i++)
    {
        cin >> X[i];
    }
    for(int i = 0, j = 19; i < 10 && j > 9; i++, j--)
    {
        temp = X[i];
        X[i] = X[j];
        X[j] = temp;
    }
    for(int i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << X[i] << endl;
    }

    return 0;
}


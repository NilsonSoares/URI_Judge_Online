#include <iostream>
using namespace std;

int main()
{
    bool  p, r;
    cin >> p >> r;
    if(p == 0)
    {
        cout << 'C' << endl;
    }
    else if(p == 1 && r == 0)
    {
        cout << 'B' << endl;
    }
    else
    {
        cout << 'A' << endl;
    }
    return 0;
}


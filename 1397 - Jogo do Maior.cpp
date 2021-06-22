#include <iostream>
using namespace std;

int main()
{
    int n, a, b, p1, p2;
    while(cin >> n && n)
    {
        p1 = p2 = 0;
        while (n--)
        {
            cin >> a >> b;
            if(a == b);
            else if(a > b)
                p1++;
            else
                p2++;
        }
        cout << p1 << " " << p2 << endl;
    }
    return 0;
}


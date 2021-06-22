#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    int x = 0;
    while(cin >> x1 >> y1 >> x2 >> y2 && (x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0))
    {
        x = 0;
        if((x1 == x2) && (y1 == y2))
        {
            cout << 0 << endl;
            x = -1;
        }
        else if(x1 == x2 || y1 == y2)
        {
            cout << 1 << endl;
            x = -1;
        }
        else
        {
            for(int i = x1, j = y1; i <= 8 && j <=8; i++,j++)
            {
                if((i == x2 && j == y2))
                {
                    x = 1;
                    i = 9;
                }
            }
            for(int i = x1, j = y1; i >= 1 && j >= 1; i--,j--)
            {
                if((i == x2 && j == y2))
                {
                    x = 1;
                    i = -1;
                }
            }
            for(int i = x1, j = y1; i <= 8 && j >= 1; i++,j--)
            {
                if((i == x2 && j == y2))
                {
                    x = 1;
                    i = 9;
                }
            }
            for(int i = x1, j = y1; i >= 1 && j <= 8; i--,j++)
            {
                if((i == x2 && j == y2))
                {
                    x = 1;
                    i = 9;
                }
            }
            if(x == 1)
            {
                cout << 1 << endl;
            }
            else if(x == 0)
            {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}


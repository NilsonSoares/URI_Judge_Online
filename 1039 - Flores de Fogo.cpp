#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int r1,x1,y1,r2,x2,y2;
    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2)
    {
        float dist = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
        if((dist + r2) > (r1))
        {
            cout << "MORTO" << endl;
        }
        else
        {
            cout << "RICO" <<endl;
        }
    }

    return 0;
}


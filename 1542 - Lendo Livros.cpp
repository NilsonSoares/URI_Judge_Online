#include <iostream>
using namespace std;

int main()
{
    float q,d,p, x;
    int np;
    while(cin >> q && q != 0)
    {
        cin >> d >> p;
        x = (p*d)/(p-q);
        np = (int) (q*x);
        cout << np;
        if(np == 1)
        {
            cout << " pagina" << endl;
        }
        else
        {
            cout << " paginas" << endl;
        }
    }
    return 0;
}


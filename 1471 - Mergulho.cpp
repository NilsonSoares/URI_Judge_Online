#include <iostream>
using namespace std;

int main()
{
    int n, r, aux,cont = 0;
    while (cin >> n >> r && n!=-1)
    {
        bool merg[n];
        for(int i = 0; i < n; i++)
        {
            merg[i] = 0;
        }
        for(int i = 0; i < r; i++)
        {
            cin >> aux;
            merg[aux-1] = 1;
            cont++;
        }
        if(cont == n)
        {
            cout << "*";
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                if(merg[i] == 0)
                {
                    cout << i+1 << " ";
                }
            }
        }
        cout << endl;
        cont = 0;
    }

    return 0;
}


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, dm, aux;
    bool c = true;
    vector <int> dists;
    cin >> n >> dm;
    for(int i = 0; i < n; i++)
    {
        cin >> aux;
        dists.push_back(aux);
    }
    dists.push_back(42195);
    for(int i = 1; i <= n; i++)
    {
        if((dists[i] - dists[i-1]) > dm)
        {
            c = false;
            i = n;
        }
    }
    if(c)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}


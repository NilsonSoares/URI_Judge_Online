#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <bool> s, n;
    int nc;
    bool aux;
    cin >> nc;
    for(int i = 0; i < nc; i++)
    {
        cin >> aux;
        if(aux)
        {
            n.push_back(aux);
        }
        else
        {
            s.push_back(aux);
        }
    }
    if(s.size() > n.size())
    {
        cout << 'Y' << endl;
    }
    else
    {
        cout << 'N' << endl;
    }
    return 0;
}


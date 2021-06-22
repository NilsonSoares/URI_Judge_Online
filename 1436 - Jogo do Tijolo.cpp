#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(int a, int b)
{
    return (a<b);
}

int main()
{
    int nc, n, aux, indice;
    vector <int> jogadores;
    cin >> nc;
    for(int i = 0; i < nc; i++)
    {
        cin >> n;
        for(int j = 0; j < n; j++)
        {
            cin >> aux;
            jogadores.push_back(aux);
        }
        sort(jogadores.begin(), jogadores.end(), comp);
        indice = (int)(jogadores.size()/2);
        cout << "Case " << i+1 << ": " << jogadores[indice] << endl;
        jogadores.clear();
    }
    return 0;
}


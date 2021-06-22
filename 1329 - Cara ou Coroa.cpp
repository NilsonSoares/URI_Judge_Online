#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <int, int> jogos;
    int n, aux;
    while(cin >> n && n)
    {
        jogos.clear();
        for(int i = 0; i < n; i++)
        {
            cin >> aux;
            jogos[aux]++;
        }
        cout << "Mary won " << jogos[0] << " times and John won " << jogos[1] << " times" << endl;
    }
    return 0;
}


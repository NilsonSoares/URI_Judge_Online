#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v (4, 0);
    int valor, cont = 0;
    while(cin >> valor && valor != 0)
    {
        cont++;
        while((valor - 50) >= 0)
        {
            valor -= 50;
            v[0]++;
        }
        while((valor - 10) >= 0)
        {
            valor -= 10;
            v[1]++;
        }
        while((valor - 5) >= 0)
        {
            valor -= 5;
            v[2]++;
        }
        while((valor - 1) >= 0)
        {
            valor -= 1;
            v[3]++;
        }
        cout << "Teste " << cont << endl;
        cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << endl;
        cout << endl;
        v.assign(4,0);
    }

    return 0;
}


#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int nc, n, aux, total = 0, cont = 0;
    double media;
    vector <int> notas;
    cin >> nc;
    for(int i = 0; i < nc; i++)
    {
        cin >> n;
        for(int j = 0; j < n; j++)
        {
            cin >> aux;
            notas.push_back(aux);
            total += aux;
        }
        media = total/n;
        for(int j = 0; j < n; j++)
        {
            if(notas[j] > media)
            {
                cont++;
            }
        }
        cout << setiosflags(ios::fixed) << setprecision(3);
        cout << ((float)cont/n)*100 << "%" << endl;
        total = 0;
        cont = 0;
        notas.clear();
    }

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int aux, maior, posicao;
    cin >> maior;
    posicao = 1;
    for(int i = 1; i < 100; i++)
    {
        cin >> aux;
        if(aux > maior)
        {
            maior = aux;
            posicao = i+1;
        }

    }
    cout << maior << endl << posicao << endl;

    return 0;
}


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int distancia;
    float combustivel;
    cin >> distancia >> combustivel;
    cout << setiosflags(ios::fixed) << setprecision(3);
    cout << distancia / combustivel << " km/l" << endl;
    return 0;
}


#include <iostream>
#include <algorithm>
using namespace std;

bool compara(int a, int b)
{
    return a < b;
}

int main()
{
    int v1[3];
    int v2[3];
    cin >> v1[0] >> v1[1] >> v1[2];
    v2[0] = v1[0];
    v2[1] = v1[1];
    v2[2] = v1[2];
    sort(&v2[0], &v2[3], compara);
    for(int i = 0; i < 3; i++)
        cout << v2[i] << endl;
    cout << endl;
    for(int i = 0; i < 3; i++)
        cout << v1[i] << endl;
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compP(int a, int b)
{
    return (a < b);
}
bool compI(int a, int b)
{
    return (a > b);
}

int main()
{
    vector <int> pares, impares;
    vector <int>::iterator it;
    int n, aux;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> aux;
        if(aux%2 == 0)
        {
            pares.push_back(aux);
        }
        else
        {
            impares.push_back(aux);
        }
    }
    sort(pares.begin(), pares.end(),compP);
    sort(impares.begin(), impares.end(),compI);
    for(it = pares.begin(); it != pares.end(); it++)
    {
        cout << *it << endl;
    }
    for(it = impares.begin(); it != impares.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}


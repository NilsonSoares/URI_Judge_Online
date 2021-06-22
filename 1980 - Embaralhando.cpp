#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    long long int fatorial[16], tam;
    fatorial[0] = 1;
    fatorial[1] = 1;
    for(int i = 2; i < 16; i++)
    {
        fatorial[i] = i * fatorial[i-1];
    }
    while(cin >> s && s != "0")
    {
        tam = s.size();
        cout << fatorial[tam] << endl;
    }
    return 0;
}


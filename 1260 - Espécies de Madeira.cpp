#include <iostream>
#include <map>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    map <string, int> especies;
    map <string, int>::iterator itmap;
    int cont = 0, n;
    string arvore;
    cin >> n >> ws;
    for(int i = 0; i < n; i++)
    {
        while(getline(cin, arvore) && arvore.size() != 0)
        {
            especies[arvore]++;
            cont++;
        }
        for(itmap = especies.begin(); itmap != especies.end(); itmap++)
        {
            cout << setiosflags(ios::fixed) << setprecision(4);
            cout << itmap->first << " " << ((itmap->second)*100)/(float)cont << endl;
        }
        if(i != n-1)
        {
        cout << endl;
        }
        especies.clear();
        cont = 0;
    }
    return 0;
}


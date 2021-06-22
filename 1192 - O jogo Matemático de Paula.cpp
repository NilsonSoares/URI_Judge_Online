#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
using namespace std;

int main()
{
    int n;
    string s, n1,n2;
    char l;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        n1 = s[0];
        l = s[1];
        n2 = s[2];
        if(n1 == n2)
        {
            cout << atoi(n1.c_str()) * atoi(n2.c_str()) << endl;
        }
        else if(islower(l))
        {
            cout <<  atoi(n1.c_str()) + atoi(n2.c_str()) << endl;
        }
        else
        {
            cout <<  atoi(n2.c_str()) - atoi(n1.c_str()) << endl;
        }

    }

    return 0;
}


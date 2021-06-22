#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    map<char, string> m;
    m['0'] = "0";
    m['1'] = "1";
    m['2'] = "2";
    m['3'] = "3";
    m['4'] = "4";
    m['5'] = "5";
    m['6'] = "6";
    m['7'] = "7";
    m['8'] = "8";
    m['9'] = "9";
    vector <string> s;
    vector <int> n;
    string notas;
    float valor = 0;
    cin >> notas;
    for(int i = 0; i < notas.size(); i++)
    {
        if(notas[i] != '0')
        {
            s.push_back(m[notas[i]]);
        }
        else
        {
            int t = s.size()-1;
            s[t] = s[t] + m[notas[i]];
        }
    }
    for(int i = 0; i < s.size(); i++)
    {
        valor += atoi(s[i].c_str());
    }
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << valor/s.size() << endl;
    return 0;
}


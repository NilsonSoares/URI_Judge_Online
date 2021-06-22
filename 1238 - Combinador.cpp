#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, j = 0;
    string a, b, comb = "";
    cin >> n;
    for(int i = 0; i <n; i++)
    {
        cin >> a >> b;
        if(a.size() == b.size())
        {
            for(int j = 0; j < a.size(); j++)
            {
                comb.push_back(a[j]);
                comb.push_back(b[j]);
            }
        }
        else if(a.size() > b.size())
        {
            for(j = 0; j < b.size(); j++)
            {
                comb.push_back(a[j]);
                comb.push_back(b[j]);
            }
            for(int k = j; k < a.size(); k++)
            {
                comb.push_back(a[k]);
            }
        }
        else if(a.size() < b.size())
        {
            for(j = 0; j < a.size(); j++)
            {
                comb.push_back(a[j]);
                comb.push_back(b[j]);
            }
            for(int k = j; k < b.size(); k++)
            {
                comb.push_back(b[k]);
            }
        }
        cout << comb << endl;
        j = 0;
        comb.clear();
    }
    return 0;
}


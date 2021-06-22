#include <iostream>
using namespace std;

int main()
{
    int n;
    float c;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int cont = 0;
        cin >> c;
        while(c > 1){
            c /=2;
            cont++;
        }
        cout << cont << " dias" << endl;
    }
    return 0;
}


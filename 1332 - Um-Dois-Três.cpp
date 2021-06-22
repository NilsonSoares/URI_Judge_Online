#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string lida;
    string one = "one";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> lida;
        if(lida.size() == 5)
        {
            cout << 3 << endl;
        }
        else
        {
            int cont = 0;
            for(int j = 0; j < 3; j++)
            {
                if(lida[j] == one[j])
                {
                    cont++;
                }
            }
            if(lida == one || cont == 2)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }

}


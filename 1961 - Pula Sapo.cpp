#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int pulo, num_canos, aux;
    bool win = true;
    vector <int> canos;
    cin >> pulo >> num_canos;
    for(int i = 0; i < num_canos; i++)
    {
        cin >> aux;
        canos.push_back(aux);
    }
    int pos_atual = canos[0];
    for(int i = 1; i < num_canos; i++)
    {
        if(abs((canos[i] - pos_atual)) > pulo)
        {
            win = false;
            i = num_canos;
        }
        pos_atual = canos[i];
    }
    if(win == true)
    {
        cout << "YOU WIN" << endl;
    }
    else
    {
        cout << "GAME OVER" << endl;
    }
    return 0;
}


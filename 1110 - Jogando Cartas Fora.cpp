#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
    int n;
    deque <int> fila;
    vector <int> vetor;
    vector <int>::iterator itvetor;

    cin >> n;
    while(n != 0)
    {
        fila.clear();
        vetor.clear();
        for(int i = 1; i <= n; i++)
        {
            fila.push_back(i);
        }
        while(fila.size() > 1)
        {
            vetor.push_back(fila.front());
            fila.pop_front();
            fila.push_back(fila.front());
            fila.pop_front();
        }
        cout << "Discarded cards: ";
        for(itvetor = vetor.begin(); itvetor != vetor.end() - 1; itvetor++)
        {
            cout << *itvetor << ", ";
        }
        cout << *itvetor << endl;
        cout << "Remaining card: " << fila.front() << endl;
        cin >> n;
    }

    return 0;
}


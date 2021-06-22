#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n, tam, num_leds = 0;
    string numero;
    map<char,int> leds;
    leds['0'] = 6;
    leds['1'] = 2;
    leds['2'] = 5;
    leds['3'] = 5;
    leds['4'] = 4;
    leds['5'] = 5;
    leds['6'] = 6;
    leds['7'] = 3;
    leds['8'] = 7;
    leds['9'] = 6;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> numero;
        tam = numero.size();
        for(int j = 0; j < tam; j++)
        {
            num_leds += leds[numero[j]];
        }
        cout << num_leds << " leds" << endl;
        num_leds = 0;
    }


    return 0;
}


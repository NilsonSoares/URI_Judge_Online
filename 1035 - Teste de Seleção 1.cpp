#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    bool teste;
    cin >> a >> b >> c >> d;
    teste = ((b>c) && (d>a) && (c+d)>(b+a) && (c>0) && (d>0) && (a%2==0));
    if(teste)
    {
        cout << "Valores aceitos" << endl;
    }
    else
    {
        cout << "Valores nao aceitos" << endl;
    }

}


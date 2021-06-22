#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num_casos;
    string r,s;
    cin >> num_casos;
    for(int i = 0; i < num_casos; i++)
    {
        cin >> r >> s;
        if(r == s)
        {
            cout << "empate" << endl;
        }
        else if(r == "tesoura" && s == "papel")
        {
            cout << "rajesh" << endl;
        }
        else if(r == "papel" && s == "pedra")
        {
            cout << "rajesh" << endl;
        }
        else if(r == "pedra" && s == "lagarto")
        {
            cout << "rajesh" << endl;
        }
        else if(r == "lagarto" && s == "spock")
        {
            cout << "rajesh" << endl;
        }
        else if(r == "spock" && s == "tesoura")
        {
            cout << "rajesh" << endl;
        }
        else if(r == "tesoura" && s == "lagarto")
        {
            cout << "rajesh" << endl;
        }
        else if(r == "lagarto" && s == "papel")
        {
            cout << "rajesh" << endl;
        }
        else if(r == "papel" && s == "spock")
        {
            cout << "rajesh" << endl;
        }
        else if(r == "spock" && s == "pedra")
        {
            cout << "rajesh" << endl;
        }
        else if(r == "pedra" && s == "tesoura")
        {
            cout << "rajesh" << endl;
        }
        else
        {
            cout << "sheldon" << endl;
        }

    }
    return 0;
}


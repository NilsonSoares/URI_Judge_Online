#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int nc, g, gred = 0, ggreen = 0, gblue = 0;
    string aux;
    cin >> nc;
    for(int i = 0; i < nc; i++)
    {
        cin >> g >> ws;
        for(int j = 0; j < g; j++)
        {
            getline(cin, aux);
            if(aux == "R G")
            {
                gred += 2;
            }
            else if(aux == "G B")
            {
                ggreen += 2;
            }
            else if(aux == "B R")
            {
                gblue += 2;
            }
            else if(aux == "G R")
            {
                ggreen += 1;
            }
            else if(aux == "R B")
            {
                gred += 1;
            }
            else if(aux == "B G")
            {
                gblue += 1;
            }
        }
        if(gred == ggreen && gred == gblue)
        {
            cout << "trempate" << endl;
        }
        else if(gred > ggreen && gred > gblue )
        {
            cout << "red" << endl;
        }
        else if(ggreen > gred && ggreen > gblue )
        {
            cout << "green" << endl;
        }
        else if(gblue > gred && gblue > ggreen )
        {
            cout << "blue" << endl;
        }
        else if(gred == ggreen || gred == gblue || ggreen == gblue)
        {
            cout << "empate" << endl;
        }
        gred = 0;
        ggreen = 0;
        gblue = 0;
    }


    return 0;
}


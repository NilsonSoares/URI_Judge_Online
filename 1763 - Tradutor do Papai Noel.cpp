#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string,string> traducoes;
    traducoes["brasil"] = "Feliz Natal!";
    traducoes["alemanha"] = "Frohliche Weihnachten!";
    traducoes["austria"] = "Frohe Weihnacht!";
    traducoes["coreia"] = "Chuk Sung Tan!";
    traducoes["espanha"] = "Feliz Navidad!";
    traducoes["grecia"] = "Kala Christougena!";
    traducoes["estados-unidos"] = "Merry Christmas!";
    traducoes["inglaterra"] = "Merry Christmas!";
    traducoes["australia"] = "Merry Christmas!";
    traducoes["portugal"] = "Feliz Natal!";
    traducoes["suecia"] = "God Jul!";
    traducoes["turquia"] = "Mutlu Noeller";
    traducoes["argentina"] = "Feliz Navidad!";
    traducoes["chile"] = "Feliz Navidad!";
    traducoes["mexico"] = "Feliz Navidad!";
    traducoes["antardida"] = "Merry Christmas!";
    traducoes["canada"] = "Merry Christmas!";
    traducoes["irlanda"] = "Nollaig Shona Dhuit!";
    traducoes["belgica"] = "Zalig Kerstfeest!";
    traducoes["italia"] = "Buon Natale!";
    traducoes["libia"] = "Buon Natale!";
    traducoes["siria"] = "Milad Mubarak!";
    traducoes["marrocos"] = "Milad Mubarak!";
    traducoes["japao"] = "Merii Kurisumasu!";
    string pais;
    while(cin >> pais)
    {
        if(traducoes.find(pais) != traducoes.end())
        {
            cout << traducoes[pais] << endl;
        }
        else
        {
            cout << "--- NOT FOUND ---" << endl;
        }
    }


    return 0;
}


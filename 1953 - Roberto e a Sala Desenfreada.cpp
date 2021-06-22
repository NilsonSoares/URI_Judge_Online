#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        string matricula, curso;
        map <string,int> alunos;
        alunos["EPR"] = 0;
        alunos["EHD"] = 0;
        alunos["INTRUSOS"] = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> matricula >> curso;
            if(curso == "EPR" || curso == "EHD")
            {
                alunos[curso]++;
            }
            else
            {
                alunos["INTRUSOS"]++;
            }
        }
        cout << "EPR: " << alunos["EPR"] << endl;
        cout << "EHD: " << alunos["EHD"] << endl;
        cout << "INTRUSOS: " << alunos["INTRUSOS"] << endl;


    }
    return 0;
}


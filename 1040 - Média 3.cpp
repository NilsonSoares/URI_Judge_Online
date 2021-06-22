#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float n1, n2, n3, n4, media, exame;
    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4)/10;
    cout << setiosflags(ios::fixed) << setprecision(1);
    cout << "Media: " << media << endl;
    if(media < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
    else if(media >= 5.0 && media <=6.9)
    {
        cout << "Aluno em exame." << endl;
        cin >> exame;
        cout << "Nota do exame: " << exame << endl;
        media = (media + exame) / 2;
        if(media < 5.0)
        {
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << media << endl;
        }
        else
        {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << media << endl;
        }
    }
    else
    {
        cout << "Aluno aprovado." << endl;
    }
    return 0;
}


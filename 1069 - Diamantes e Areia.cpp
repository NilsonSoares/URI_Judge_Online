#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int N, tam_string, num_diamantes = 0;

    cin >> N >> ws;
    for(int i = 0; i < N; i++)
    {
        stack <char> abertura;
        stack <char> fechamento;
        string caso_teste;
        num_diamantes = 0;
        getline(cin, caso_teste);
        tam_string = caso_teste.size();
        for(int j = 0; j < tam_string; j++)
        {
            if(caso_teste[j] == '<')
            {
                abertura.push(caso_teste[i]);
            }
            else if(caso_teste[j] == '>')
            {
                fechamento.push(caso_teste[i]);
                if(!abertura.empty())
                {
                    abertura.pop();
                    fechamento.pop();
                    num_diamantes++;
                }
            }
        }
        cout << num_diamantes << endl;
    }

    return 0;
}


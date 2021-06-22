#include <iostream>
#include <stdio.h>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string expressao;
    while(cin >> expressao)
    {
        stack <char> abertura;
        stack <char> fechamento;
        int tam = expressao.size();
        for(int i = 0; i < tam; i++)
        {
            if(expressao[i] == '(')
            {
                abertura.push(expressao[i]);
            }
            if(expressao[i] == ')')
            {
                fechamento.push(expressao[i]);
                if(abertura.size() != 0)
                {
                    abertura.pop();
                    fechamento.pop();
                }
            }
        }
        if(abertura.size() == 0 && fechamento.size() == 0 )
        {
            cout << "correct" << endl;
        }
        else
        {
            cout << "incorrect" << endl;
        }
    }
    return 0;
}


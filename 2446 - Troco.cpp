    #include <iostream>
    #include <vector>
    #include <algorithm> // sort
    using namespace std;
     
    vector < int> Dp (100000, -1);
     
    // funÃ§Ã£o para orenar os valores das moedas em ordem decrescente
    bool ordena( int a, int b)
    {
        return (a > b);
    }
     
    int solve(long int m, vector<long int> &moedas, int i)
    {
        if(m == 0)
        {
            return 1;
        }
        if(m < 0)
        {
            return 0;
        }
        for(; i < moedas.size(); i++)
        {
            if(solve((m - moedas[i]), moedas, (i+1)))
            {
                return Dp[m-moedas[i]] = 1;
            }
        }
        return Dp[m] = 0;
    }
     
    int main()
    {
        long int m;
        int n, aux;
        vector <long int> moedas;
        vector <int>::iterator it_vet;
     
            cin >> m >> n;
            for(int i = 0; i < n; i++)
            {
                cin >> aux;
                moedas.push_back(aux);
            }
            sort(moedas.begin(), moedas.end(), ordena);
     
            if(solve(m, moedas, 0) == 1)
            {
                cout << "S" << endl;
            }
            else
            {
                cout << "N" << endl;
            }
     
        return 0;
    }
     

#include <iostream>
#include <list>
using namespace std;

class Grafo
{
    int V;
    list<int> *adj;
public:
    Grafo(int V);//construtor
    void adicionaAresta(int v1, int v2, int p);// adiciona aresta
    bool bfs(int s);// faz a bfs no grafo
};

Grafo::Grafo(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
void Grafo::adicionaAresta(int v1, int v2, int p)
{
    if(p == 1)
    {
        adj[v1].push_back(v2);
    }
    else
    {
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
}
bool Grafo::bfs(int s)
{
    //lista booleana para os vértices visitados
    bool *visitado = new bool[V];
    //marca todos os vértices como não visitados
    for(int i = 0; i < V; i++)
    {
        visitado[i] = false;
    }
    //fila para BFS
    list<int> fila;
    visitado[s] = true;
    fila.push_back(s);

    list<int>::iterator it;
    while(!fila.empty())
    {
        s = fila.front();
        fila.pop_front();
        for(it = adj[s].begin(); it != adj[s].end(); it++)
        {
            if(!visitado[*it])
            {
                visitado[*it] = true;
                fila.push_back(*it);
            }
        }

    }
    for(int i = 0; i < V; i++)
    {
        if(!visitado[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int V, E, v1, v2, p;
    Grafo *grafo;
    while(cin >> V >> E && (V||E))
    {
        grafo = new Grafo(V);
        while(E--)
        {
            cin >> v1 >> v2 >> p;
            grafo->adicionaAresta(v1-1, v2-1, p);
        }
        bool conexo = true;
        for(int i = 0; i < V; i++)
        {
            if(!grafo->bfs(i))
            {
               conexo = false;
               i = V;
            }
        }
        if(conexo)
            cout << 1 << endl;
        else
            cout << 0 << endl;

        delete grafo;
    }
    return 0;
}


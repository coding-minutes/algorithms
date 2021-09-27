#include<bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    list<int> *l;
    public:
    Graph(int v)
    {
        V=v;
        l=new list<int>[V];
    }
    void addEdge(int u,int v,bool undir=true)
    {
        l[u].push_back(v);
        if(undir)
        {
            l[v].push_back(u);
        }
    }
    void dfshelper(int node,bool *visited)
    {
        visited[node]=true;
        cout<<node<<" ";
        for(auto nbr:l[node]){
            if(!visited[nbr])
            {
                dfshelper(nbr,visited);
            }
        }
        return;
    }
    void DFS(int source)
    {
        bool *visited=new bool[V]{0};
        dfshelper(source,visited);
        cout<<endl;
    }
    void printGraph()
    {
        for(int i=0;i<V;i++)
        {
            cout<<i<<" --> ";
            for(auto connected:l[i])
            {
                cout<<connected<<",";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(3,5);
    g.addEdge(2,3);
    g.addEdge(5,6);
    g.addEdge(4,5);
    g.addEdge(0,4);
    g.addEdge(3,4);
    g.printGraph();
    g.DFS(0);
}
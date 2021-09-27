// BFS Breadth First Search is a Searching Algorithm where the nodes closer to source node are searched and printed and then the neighbour nodes is searched and printed.
#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int> *l;
    public:
    Graph(int v)
    {
        V=v;
        l=new list<int>[v];
    }
    void addEdge(int u,int v,bool undir=true)
    {
        l[u].push_back(v);
        if(undir)
        {
            l[v].push_back(u);
        }
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
    void BFS(int source)
    {
        queue<int> q;
        // Enqueuing Source to the Queue.
        q.push(source);

        bool *visited=new bool[V]{0};
        
        // visited array to get info about visited vertices.

        visited[source]=true;

        while(!q.empty())
        {
            int vertice=q.front();
            q.pop();
            cout<<vertice<<" ";
            for(auto neighbours:l[vertice])
            {
                // Checking for every neighbour node it is visited or not.
                if(!visited[neighbours]){

                    q.push(neighbours);
                    // Marked Visited.
                    visited[neighbours]=true;
                }
                
            }
        }
        cout<<endl;
    }
    void Shortest_Distance_and_Path_from_Source(int src,int dest=-1)
    {

        queue<int> q;
        // Enqueuing Source to the Queue.
        q.push(src);

        bool *visited=new bool[V]{0};
        int *parent=new int[V];
        int *distance=new int[V];
        parent[src]=src;
        distance[src]=0;
        // visited array to get info about visited vertices.

        visited[src]=true;

        while(!q.empty())
        {
            int vertice=q.front();
            q.pop();
            for(auto neighbours:l[vertice])
            {
                // Checking for every neighbour node it is visited or not.
                if(!visited[neighbours]){

                    q.push(neighbours);
                    // Marked Visited.
                    parent[neighbours]=vertice;
                    distance[neighbours]=distance[vertice]+1;
                    visited[neighbours]=true;
                }
                
            }
        }
        // Shortest distance of every Node from source.
        cout<<src<<":-\n";
        for(int i=0;i<V;i++)
        {
            cout<<distance[i]<<" ";
        }
        cout<<endl;
        // Path of node from src.
        if(dest!=-1)
        {
            int temp=dest;
            while(temp!=src)
            {
                cout<<temp<<"--";
                temp=parent[temp];
            }
            cout<<temp<<" ";
        }
        
        cout<<endl;
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
    g.BFS(1);
    g.Shortest_Distance_and_Path_from_Source(1);
    g.Shortest_Distance_and_Path_from_Source(1,6);
}
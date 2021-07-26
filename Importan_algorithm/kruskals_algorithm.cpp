#include<bits/stdc++.h>
using namespace std;

class edge{
    public :
    int source;
    int dest;
    int weight;
};
bool compare(edge a, edge b)
{
    return a.weight<b.weight;
}
int findparent (int  v, int *parent )
{
    if (parent[v]==v)
    {
        return v;
    }
    return findparent(parent[v], parent);
}
void kruskal(edge *input,int n,int e)
{
    //sort the input array based on their weight
    sort(input,input+e,compare);
    edge *output = new edge[n-1];//for final output
    int *parent = new int[n];//for checking cycle 
    for (int i = 0; i < n ; i++)
    {
        parent[i] = i;
    }
    
    int count = 0;
    int i = 0;
    while (count!=n-1)
    {
        edge currentedge = input[i];
        int sourceparent = findparent(currentedge.source,parent);
        int destparent = findparent(currentedge.dest,parent);
        if (sourceparent!=destparent)
        {
            output[count] = currentedge;
            count++;
            parent[sourceparent] =destparent;
        }
        i++;

        
    }
    for (int i = 0; i < n-1 ; i++)
    {
        if(output[i].source<output[i].dest)
        cout<<output[i].source<<" "<<output[i].dest<<" "<<output[i].weight<<endl;
        else 
        cout<<output[i].dest<<" "<<output[i].source<<" "<<output[i].weight<<endl;
    }
    
    
}
int main()
{
    
    int n,e;
    cin >> n >> e;//no of nodes and edges
    edge *input = new edge[e];
    for (int i = 0; i < e ; i++)
    {
        int s,d,w;
        cin >>s>>d>>w;
        input[i].source = s;
        input[i].dest = d;
        input[i].weight = w;
    }
    cout<<"MINIMUM SPANNING TREE IS  : "<<endl;
    kruskal(input,n,e);
// 6 11
// 0 1 2
// 1 3 1 
// 0 2 4
// 2 4 9
// 4 5 5
// 3 5 7
// 4 3 11 
// 2 5 10
// 0 3 3
// 2 1 8
// 2 3 6
    


return 0;
}
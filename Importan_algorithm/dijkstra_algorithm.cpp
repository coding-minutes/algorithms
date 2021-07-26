#include<bits/stdc++.h>
using namespace std;
int findminvertex(int *distance,bool *visited,int n)
{
       int minvertex = -1;
       for (int i = 0; i < n ; i++)
       {
            if (!visited[i] && (distance[i] < distance[minvertex] || minvertex ==-1))
            {
                minvertex = i;
            }
            
       }
       return minvertex;
}
void dijkstra(int **edges,int n){
    bool *visited = new bool[n];
    int *distance = new int[n];
    for (int i = 0; i < n ; i++)
    {
        visited[i] = false;
        distance[i] = INT_MAX;
    }
    distance[0] = 0;

    for (int i = 0; i <  n-1 ; i++)
    {
        int minvertex = findminvertex(distance,visited,n); 
        visited[minvertex] = true;
        for (int j = 0; j < n ; j++)
        {
            if (edges[minvertex][j]!=0 && !visited[j])
            {
                int dist = distance[minvertex]+edges[minvertex][j];
                if (dist<distance[j])
                {
                    distance[j] = dist;
                }
                
            }
            
        }
        
    }
    for (int i = 0; i < n ; i++)
    {
        cout <<i<<" "<<distance[i]<<endl;
    }
    
    delete [] visited;
    delete [] distance;
}
int main()
{
       int n,e;
    cin >> n >> e;//no of nodes and edges
    int **edges = new int*[n];
    for (int i = 0; i < n ; i++)
    {
          edges[i] = new int[n];
          for (int j = 0; j < n;j++)
          {
              edges[i][j] = 0;
          }
          
    }
    for (int i = 0; i <  e ; i++)
    {
        int f,s,weight;
        cin >>f>>s>>weight;
        edges[f][s]=weight;
        edges[s][f]= weight;
    }
    cout<<endl;
        dijkstra(edges,n);
     for (int i = 0; i < n ; i++)
   {
       delete [] edges[i];
   }
   delete [] edges;
// 5 7
// 0 1 4      
// 0 2 8 
// 1 3 5 
// 1 2 2
// 2 3 5 
// 2 4 9
// 3 4 4
   
return 0;
}
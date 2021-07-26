#include<bits/stdc++.h>
using namespace std;

int findminindex(int *weight,bool *visited,int n)
{
    int minindex = -1;
    for (int i = 0; i < n ; i++)
    {
      if (!visited[i] && (weight[i]<weight[minindex] || minindex == -1))
      {
          minindex = i;
      }
      
    }
    return minindex;
    
}
void prims (int **edges,int n)
{
    bool *visited = new bool[n];
    int *parent = new int[n];
    int *weight = new int[n];
    for (int i = 0; i < n ; i++)
    {
        visited[i] = false;
        weight[i] = INT_MAX;
    }
    parent[0] = -1;
    weight[0] = 0;
   
    for (int i = 0; i < n-1 ; i++)
    {
           int minvertex = findminindex(weight,visited,n);
           visited[minvertex] = true;
           for (int j  = 0; j < n ; j++)
           {
               if(edges[minvertex][j]!=0 && !visited[j]){
               if(edges[minvertex][j]<weight[j])
               {
               weight[j] = edges[minvertex][j];
               parent[j] = minvertex;
               }
               }
           }
           
    }
    
    for (int i = 1 ; i < n ; i++)
    {
        if (parent[i]<i)
        {
            cout<<parent[i]<<" "<<i<<" "<<weight[i]<<endl;
        }
        else{
            cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;
        }
        
    }
    
    
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
    cout<<"MINIMUM SPANNING TREE IS  : "<<endl;
   prims(edges,n);
    
    
   for (int i = 0; i < n ; i++)
   {
       delete [] edges[i];
   }
   delete [] edges;
   
    
// 5 7 
// 0 1 4 
// 0 2 8
// 1 3 6
// 1 2 2
// 2 3 3
// 2 4 9
// 3 4 5
    


return 0;
}
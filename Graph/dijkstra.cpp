// Author : GUNJAN KUMAR BISWAS
#include<bits/stdc++.h>
#define int long long
using namespace std;
void input_file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

#define all(v) v.begin() , v.end()
#define int long long
#define pb push_back
#define ff first
#define ss second

const int N = (int)( 2e5 + 10);
const int inf = (int)(1e18 + 10);
#define P pair<int,int>

map< P , int > mpp;
vector<int>dist;
vector<int>parent;
vector<int>adj[N];

void dijkstra()
{
    priority_queue< P , vector<P> , greater<P>> pq;
    pq.push({0, 1});
    // parent[1] = 0;
    while (!pq.empty())
    {
        auto i = pq.top();
        pq.pop();
        int distance = i.ff;
        int node = i.ss;

        for (auto it : adj[node])
        {
            if (distance + mpp[ {node, it}] < dist[it])
            {
                dist[it] = distance + mpp[ {node, it}];
                parent[it] = node ;
                pq.push({dist[it] , it});
            }
        }
    }

}

signed main()
{
    input_file();

    int n, m;
    cin >> n >> m;
    dist = vector<int>(n + 10);
    parent = vector<int>(n + 10);
    for (int i = 1; i <= n; i++)
    {
        dist[i] = inf;
        parent[i] = i;
    }
    dist[1] = 0;
    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        mpp[ {u, v } ] = w;
        mpp[ {v, u }]  = w;
        adj[v].pb(u);
        adj[u].pb(v);
    }

    dijkstra();
    /*for(auto it : mpp)
    {
        cout << it.ff.ff <<" "<< it.ff.ss << " ="<<it.ss<<endl;
    }*/
    vector<int>ans;
    ans.pb(n);
    int ele = n;
    /*for(auto it :parent)
        cout << it<<" ";
     */
    if (dist[ele] == inf)   // disconnected graph
    {
        cout << -1 << endl;
        return 0;
    }
    while (ele != 1)
    {

        ele = parent[ele];
        ans.pb(ele);
    }

    reverse(all(ans));
    for (auto it : ans)
        cout << it << " ";
    cout << endl;

    return 0;
}
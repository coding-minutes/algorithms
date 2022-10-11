#include<bits/stdc++.h>
using namespace std;

#define int long long
#define inf  1e18

const int N = 2e5 + 11;
vector<vector<pair<int, int>>> adj(N);

// every time we are taking the node which is closer
// and then we are updating the neighbours of it if they have a greater dist from
// src directly so path ---src---node---nbr instead of src-->nbr
// This fails for negative wts
// Approach assume three nodes from src(0)
// 1,2,3    0----->(1,5),(2,6),(3,7)
// So we will visit 1 first and it will be popped dist is cal for 1
// because any node 2,3 which is having a greater distance from 0 and then added weight for
// 2-->1 which is positive will always give the bigger answer
// 6+ +ve value > 5 // Not deal with -ve edges

void ShortestPathDijshtra(int src, int n)
{
	vector<int> dist(N, INT_MAX);
	dist[src] = 0;
	set<pair<int, int>> s;
	s.insert({0, src});



	while (!s.empty())
	{

		auto it = *s.begin();
		int node_val = it.second;
		int distance_till_now = it.first;
		s.erase(s.begin());

		for (auto nbr : adj[node_val])
		{
			int v = nbr.first;
			int u_v_dist = nbr.second;

			if (dist[v] > dist[node_val] + u_v_dist)
			{
				auto f = s.find({dist[v], v});
				if (f != s.end())
				{
					s.erase(f);
				}
				dist[v] = dist[node_val] + u_v_dist;
				s.insert({dist[v], v});
			}


		}
	}

	for (int i = 0; i <= n; ++i)
	{
		cout << dist[i] << " ";
	}




}





int32_t main()
{

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		int u, v, wt;
		cin >> u >> v >> wt;
		adj[u].push_back({v, wt});
		adj[v].push_back({u, wt});

	}


	int src = 0;
	ShortestPathDijshtra(src, n);








}
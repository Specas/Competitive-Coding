#include <iostream>


using namespace std;

long long int cost[100001][100001];
long long int visited[100001] = {0};





//~ void dfs(int u)
//~ {
	//~ visited[u] = 1; // visited
	//~ for(ii=1;ii<=n;ii++)
	//~ {
		//~ if(cost[u][ii]==1 && visited[ii]!=1)
		//~ {
			//~ dfs(ii);
		//~ }
	//~ }
//~ }

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n,m;


		cin >> n >> m; // n is the number of nodes and m is the number of edges in the graph
		
		// Iniitalizing to zero
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=n;j++)
			{
				cost[i][j] = 0;
			}
		}
		
		
		// Maximum fire routes = number of connected components. We implement this using DFS
		
		// First we generate the adjacency matrix
		for(int i=0;i<m;i++)
		{
			int a,b;
			cin >> a >> b;
			cost[a][b] = 1;
			cost[b][a] = 1;
		}
		
		int connected_comp = 0;
		
		//DFS
		
		for(int i=1;i<=n;i++)
		{
			if(visited[i]==0)
			{
				//not visited
				connected_comp++;
				//~ dfs(i);
			}
		}
		
		cout << connected_comp << endl;
	}
}
		
		
		
	

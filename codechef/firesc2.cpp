#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		
		// The max number of exits =  number of connected graphs
		

		int visited[n+1];
		int st[n+1]; // stack for DFS
		
		// Initializing vectors
		vector <int> cost[200010];
		for(int i=0;i<=n;i++)
		{
			cost[i].clear();
		}
		
		for(int i=0;i<=n;i++)
		{
			visited[i] = 0;
			st[i] = 0;
		}
		
		// adjacency matrix
		for(int i=0;i<m;i++)
		{
			int a,b;
			cin >> a >> b;
			cost[a].push_back(b);
			cost[b].push_back(a);
		}
		
		int connected_count = 0;
		
		long long int ans = 1; // for ways of choosing the captain
			
		for(int k=1;k<=n;k++)
		{
			long long int an = 0; // Number of elements in the connected graph
			
			if(visited[k]==0)
			{
				connected_count++;
				
				//dfs
				
				int top = 0;
				st[top] = k;
				visited[k] = 1;
				top++;
				
				
				
				while(top>=1)
				{
					int v = st[--top];
					an++;
					
					for(unsigned int j=0;j<cost[v].size();j++)
					{
						if(visited[cost[v][j]]==0)
						{

							st[top] = cost[v][j];
							top++;
							visited[cost[v][j]] = 1;
						}
					}
				}
			}
			if(an!=0)
				ans = (ans*an)%1000000007;
		}
		
		ans = ans%1000000007;
		
		cout << connected_count << " " << ans << endl;
	}
}	
			
			
			
			
			
			
			
			
			
			
			

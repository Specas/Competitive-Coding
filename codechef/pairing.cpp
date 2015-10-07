#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		
		int a[m];
		int b[m];
		
		int visited[n];
		for(int i=0;i<n;i++)
		{
			visited[i] = 0;
		}
		
		
		int ans[m];
		int ans_pos = 0;
		
		
		for(int i=0;i<m;i++)
		{
			cin >> a[i];
			cin >> b[i];
		}
		
		for(int i=m-1;i>=0;i--)
		{
			if(!visited[a[i]] && !visited[b[i]])
			{
				visited[a[i]] = 1;
				visited[b[i]] = 1;
				ans[ans_pos] = i;
				ans_pos++;
			}
		}
			
		
		
		for(int i=ans_pos-1;i>=0;i--)
		{
			cout << ans[i] << " ";
		}
		
		cout << endl;
	}
}
		
		
			
			
				
				
				
				
				
				
				
				
				
				
				

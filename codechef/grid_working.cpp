#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	

	
	while(t--)
	{
		long long int n;
		cin >> n;
		
		int a[n][n];
		
		int ans = 0;
		
		for(int i=0;i<n;i++)
		{
			string s;
			cin >> s;
			
			
			for(int j=0;j<n;j++)
			{
				if(s[j]=='#')
				{
					a[i][j] = -1; // rock
				}
				else if(s[j] == '.')
				{
					a[i][j] = 0; // no rock
				}
			}
		}
		
		
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>=0;j--)
		{
			if(a[i][j]==-1)
			{
				break;
			}
			
			a[i][j]++;
		}
	}
	
	for(int j=0;j<n;j++)
	{
		for(int i=n-1;i>=0;i--)
		{
			if(a[i][j]==-1)
			{
				break;
			}
			a[i][j]++;
			

		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==2)
			{
				ans++;
			}
		}
	}
	
	cout << ans << endl;
}
}

	
	
	
	
	
	
	
	
	
	
	
	

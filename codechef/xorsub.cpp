#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <list>
#include <limits.h>
#include <queue>
#include <stack>
#include <vector> 


using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		bool dp[1024];
		
		
		
		memset(dp, 0, sizeof(dp));
		
		dp[0] = true;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<1024;j++)
			{
				dp[j^a[i]] = dp[j^a[i]]|dp[j];
			}
		}
		
		int maxx = k;
		
		for(int j=0;j<1024;j++)
		{
			
			if(dp[j])
			{
				maxx = max(maxx, k^j);
			}
		}
		
		cout << maxx << endl;
	}
}	
				
				
				
				
				
				
				
				
				
				
				
				
				
		
		

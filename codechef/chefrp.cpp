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
#include <stdlib.h> 

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	
	int a[100005];
	
	while(t--)
	{
		int n;
		scanf("%d", &n);
		
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
		}
		
		sort(a, a+n, greater<int>());
		
		if(n==1)
		{
			if(a[0]==1)
			{
				cout << -1 << endl;
			}
			else
			{
				cout << 2 << endl;
			}
		}
		
		else
		{
			
			long long int ans = 0;
			for(int i=0;i<n-1;i++)
			{
				if(a[i]==1)
				{
					ans = -1;
					break;
				}
				else
				{
					ans = ans+a[i];
				}
			}
			
			if(a[n-1]==1)
			{
				ans = -1;
			}
			else
			{
				ans +=2;
			}
			
			cout << ans << endl;
		}
	}
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

		

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
	
	while(t--)
	{
		long long int x, y;
		scanf("%lld%lld", &x, &y);
		
		x = abs(x);
		y = abs(y);
		
		long long int k, ans=0;
		
		if(x==y)
		{
			printf("%lld\n", 2*x);
		}
		
		
		else
		{
			
			
			if(x>y)
			{
				ans = ans + 2*y;
				k = x-y;
				
				if(k%2==0)
				{
					ans = ans + k*2;
				}
				else
				{
					ans = ans + (k*2+1);
				}
			}
			else
			{
				ans = ans + 2*x;
				k = y-x;
				
				if(k%2==0)
				{
					ans = ans + (k*2);
				}
				else
				{
					ans = ans + (k*2-1);
				}
			}
			
			printf("%lld\n", ans);
		}
		
		
	}
}
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				

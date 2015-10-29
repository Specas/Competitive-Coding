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

int gcd(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b, a%b);
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	

	
	while(t--)
	{
		
		
		int n,q;
		scanf("%d%d", &n, &q);
		
		int a[n];
		int aa[n];
		int bb[n];
		
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
			
			if(i==0)
			{
				aa[i] = a[i];
			}
			else
			{
				aa[i] = gcd(a[i], aa[i-1]);
			}
		}
		
		for(int i=n-1;i>=0;i--)
		{
			if(i==n-1)
			{
				bb[i] = a[i];
			}
			else
			{
				bb[i] = gcd(a[i], bb[i+1]);
			}
		}
		
		
		while(q--)
		{
			
			int l,r;
			
			scanf("%d%d", &l, &r);
			
			l-=1;
			r-=1;
			
			
			int ll = l-1;
			int rr = r+1;
			
			if(ll<0)
			{
				printf("%d\n", bb[rr]);
			}
			else if(rr>n-1)
			{
				printf("%d\n", aa[ll]);
			}
			else
			{
				
				printf("%d\n", gcd(aa[ll], bb[rr]));
			}
		}
	}
}
		
		
			
		
		
		



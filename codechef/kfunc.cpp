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

long long int summ(long long int n)
{
	long long int d = 0;
	long long int sum = 0;
	long long int tmp = n;
	while(tmp!=0)
	{
		d = tmp%10;
		sum = sum+d;
		tmp = tmp/10;
	}
	return sum;
}

int digsum(long long int n)
{
	while(n>=10)
	{
		n = summ(n);
	}
	
	return n;
}
		

int main()
{
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		long long int a, d, l, r;
		scanf("%lld%lld%lld%lld", &a, &d, &l, &r);
		
		
		int origsum[9];
		
		for(int i=0;i<9;i++)
		{
			origsum[i] = digsum(a+i*d);
		}
		
		long long int st[10] = {0};
		long long int end[10] = {0};
		
		
		
		// end first
		for(int i=0;i<9;i++)
		{
			end[origsum[i]]++;
		}
		
		long long int div = r/9;
		
		for(int i=1;i<10;i++)
		{
			end[i] = end[i]*div;
		}
		
		int rem = r%9;
		
		for(int i=0;i<rem;i++)
		{
			end[origsum[i]]++;
		}
		
		
		
		// now for st
		l = l-1;
		
		for(int i=0;i<9;i++)
		{
			st[origsum[i]]++;
		}
		
		div = l/9;
		
		for(int i=1;i<10;i++)
		{
			st[i] = st[i]*div;
		}
		
		rem = l%9;
		
		for(int i=0;i<rem;i++)
		{
			st[origsum[i]]++;
		}
		
		for(int i=1;i<10;i++)
		{
			end[i] = end[i] - st[i];
		}
		
		//~ for(int i=1;i<10;i++)
		//~ {
			//~ cout << end[i] << " ";
		//~ }
		//~ cout << endl;
		
		long long int ans = 0;
		
		for(int i=1;i<10;i++)
		{
			ans = ans + end[i]*i;
		}
		
		cout << ans << endl;
	}
}
	

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		



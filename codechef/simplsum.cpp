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

bool aa[10000005];



long long int gcd(long long int a, long long int b)
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

long long int  check(long long int n)
{
	long long int tmp = n-1;
	long long int sum = 0;
	if(tmp%2==0)
	{
		for(int i=1;i<=tmp/2;i++)
		{
			sum = sum + n/gcd(n,i);
		}
		
		return 2*sum + 1;
	}
	else
	{
		long long int div = (tmp-1)/2;

		for(int i=1;i<=div;i++)
		{
			sum = sum + n/gcd(n,i);
		}
		
		sum = 2*sum + (n/gcd(n, ((tmp-1)/2+1))) + 1;
		
		return sum;
	}
	
}

long long int sum_sieve_fact(long long int n)
{
	
	vector <int> a;
	bool istwo = false;
	
	long long int nn = n;
	
	while(n%2==0)
	{
		n = n/2;
		//~ cout << 2 << " ";
		istwo = true;
	}
	
	if(istwo)
	{
		a.push_back(2);
	}
	

	
	for(long long int i=3;i<=sqrt(n);i=i+2)
	{
		
		bool isnum = false;
		
		while(n%i==0)
		{
			//~ cout << i << " ";
			n = n/i;
			isnum = true;
	
		}
		
		if(isnum)
		{
			a.push_back(i);
		}
	}
	
	if(n>2)
	{
		//~ cout << n;
		a.push_back(n);
	}
	
	
	//~ for(size_t i=0;i<a.size();i++)
	//~ {
		//~ cout << a[i] << " ";
	//~ }
	//~ 
	
	
	
	// Starting the Sieve process
	
	
	memset(aa, false, nn+1);
	
	long long int count = 0;
	long long int ans = 0;
	
	for(size_t i=0;i<a.size();i++)
	{
		if(!aa[i])
		{
			cout << "a[i]: " << a[i] << endl;
			
			if(a[0]!=nn)
			{
			
				ans = ans + (nn/gcd(nn,a[i]));
				count++;
			}
				
			long long int j = 2*a[i];
			while(j<nn)
			{
				
				
				if(!aa[j])
				{
					ans = ans + (nn/gcd(nn, j));
					cout << j << " ";
					count++;
					aa[j] = true;
				}
				
				j+=a[i];
				
			}
			cout << endl;
		}
	}
	
	//~ cout << "count : " << count << endl;
	
	ans = ans + nn + 1 + (nn-2-count)*nn;
	
	return ans;
	

}

int main()
{
	long long int t;
	scanf("%lld", &t);
	
	while(t--)
	{
		long long int n;
		scanf("%lld", &n);

		
		
		cout << check(n) << endl;
	}
}
		
		

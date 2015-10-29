#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <string> 

using namespace std;

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

int main()
{
	long long int t;
	scanf("%lld", &t);
	
	while(t--)
	{
		long long int n,m;
		scanf("%lld %lld", &n, &m);
		
		if(n==1||m==1)
		{
			cout << max(n,m) << endl;
		}

		else
		{
			cout << gcd(n-1, m-1)+1 << endl;
		}
	}
}

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		long long int  n,k;
		scanf("%lld %lld", &n, &k);
		
		long long int div,rem;
		
		if(k==0)
		{
			printf("0 %lld\n", n);
		}
		else
		{
			div = n/k;
			rem = n%k;
			
			printf("%lld %lld\n", div, rem);
		}
	}
}
		
		


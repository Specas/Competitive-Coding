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
	
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		long long int n,m;
		
		scanf("%lld%lld", &n, &m);
		
		if(n<=1)
		{
			cout << "Yes" << endl;
			continue;
		}
		
		if(m==0)
		{
			cout << "No 1" << endl;
			continue;
		}
		
		long long int ansgcd = gcd(n,m);
		
		if(ansgcd==1)
		{
			cout << "Yes" << endl;
		}
		else
		{
			long long int residue = n/ansgcd;
			cout << "No " << residue << endl;
		}
	}
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

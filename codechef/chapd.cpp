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

bool isfact(long long int a, long long int b)
{
	if(b==1)
	{
		return false;
	}
	
	long long int d = gcd(a, b);
	if(d==1)
	{
		return true;
	}
	return isfact(a, b/d);
	
}

int main()
{
	
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		long long int a,b;
		scanf("%lld%lld", &a, &b);
		
		bool ans = isfact(a,b);
		
		if(ans)
		{
			cout << "No" << endl;
		}
		else
		{
			cout << "Yes" << endl;
		}
		
	}
} 
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

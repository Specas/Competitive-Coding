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
	int t;
	cin >> t;
	
	while(t--)
	{
		long long int n,m;
		scanf("%lld %lld", &n, &m);
		
		long long int evena = n/2;
		long long int odda = n - evena;
		long long int evenb = m/2;
		long long int oddb = m - evenb;
		
		long long int num = n*m - evena*evenb - odda*oddb;
		long long int den = n*m;
		
		long long int g = gcd(num, den);
		
		cout << num/g << "/" << den/g << endl;
	}
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

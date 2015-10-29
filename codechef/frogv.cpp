#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int n,p;
	long long int k;
	long long int a[n];
	
	scanf("%d %lld %d", &n, &k, &p);
	
	for(int i=0;i<n;i++)
	{
		scanf("%lld", &a[i]);
	}
	
	sort(a, a+n);
	
	


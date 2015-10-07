#include <iostream>
#include <cstdio>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	long long int n = 26;
	
	long long int pcount = 0;
	
	while(n%2==0)
	{
		cout << 2 << " ";
		n = n/2;
		pcount++;
	}
	
	if(pcount%2!=0)
	{
		cout << "No" << endl;
	}
	
	for(long long int i=3;i<=sqrt(n);i=i+2)
	{
		pcount = 0;
		
		while(n%i==0)
		{
			cout << i << " ";
			n = n/i;
			pcount++;
		}
		
		cout << "---- " << pcount << endl;
		
		if(pcount%2!=0)
		{
			cout << "No" << endl;
		}
	}
	
	cout << "Not after this" << endl;
	
	if(n>2)
	{
		cout << n << endl;
	}
}




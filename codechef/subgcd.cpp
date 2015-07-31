#include <iostream>
#include <cstdio>

using namespace std;

int gcd(int, int);

int gcd(int a, int b)
{
	if((a%b)==0)
	{
		return b;
	}
	else
	{
		return gcd(b, (a%b));
	}
}

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		long int n;
		cin >> n;
		
		long int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		long int flag = 0;
		
		long int g = a[0];

		
		for(int i=1;i<n;i++)
		{
			
			g = gcd(a[i], g);
			
			if(g==1)
			{
				flag = 1;
				break;
			}
			
		}
		
		if(flag==0)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << n << endl;
			
		}
	}
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			


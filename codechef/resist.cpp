#include <iostream>
#include <math.h>

using namespace std;



int main()
{
	int t;
	cin >> t;
	
	long long int n,m;
	
	while(t--)
	{
		cin >> n >> m;
		
		long long int a, b;
		a = 1;
		b = 1;
		
		for(long long int i=1;i<n;i++)
		{
			a = a+b; // New a
			b = a+b; // New b
			
			
			a = a%m;
			b = b%m;
			
		}
		
		
		a = a%m;
		b = b%m;
		
		cout << a << "/" << b << endl;
	}
}
			
			
			
			
			
			
			
			
			
			
			
			
			
		

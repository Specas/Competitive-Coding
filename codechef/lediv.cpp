#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int gcd(int, int);

int gcd(int a, int b)
{
	if(a%b==0)
	{
		return b;
	}
	else
	{
		return gcd(b,a%b);
	}
}

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		
		int a[n];
		int hcf;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			if(i==0)
			{
				hcf = a[0];
			}
			else
			{
				hcf = gcd(hcf, a[i]);
			}
		}
		

		
		if(hcf==1)
		{
			cout << -1 << endl; // as we need to find the least common divisor greater than 1
			goto label;
		}
		
		
		else
		{
			//~ cout << hcf;
			// finding least common divisor from the hcf
			for(int i=2;i<=(sqrt(hcf)+1);i++)
			{
				if(hcf%i==0)
				{
					
					cout << i << endl;
					goto label;
					
				}
			}
		}
		
		cout << hcf << endl;
		
		label :;
	}
}
		

				
				
				
				
				
				
				
				
				
				
				
				
				
			
	


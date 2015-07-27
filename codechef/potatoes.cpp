#include <iostream>
#include <math.h>

using namespace std;

bool prime(int);

bool prime(int n)
{
	
	// return true if it is a prime
	
	int count = 0;
	
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	
	if(count==1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	
	int t;
	cin >> t;
	
	while(t--)
	{
		
		int x, y;
		cin >> x >> y;
		
		int start = x+y;
		
		for(int i=(start+1);;i++)
		{
			if(prime(i))
			{
				cout << (i-start) << endl;
				break;
			}
		}
	}
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	

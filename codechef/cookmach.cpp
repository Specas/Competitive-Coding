#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		long long int a,b;
		cin >> a >> b;
		
		long long int turns = 0;
		
		// 
		while(true)
		{
			// we know that a finite solution exists
			if(b%a==0)
			{
				for(;;)
				{
					if(a==b)
					{
						goto label;
					}
					else
					{
						a = a*2;
						turns++;
					}
				}
			}
			else
			{
				if(a%2==0)
				{
					a = a/2;
					turns++;
				}
				else
				{
					a = (a-1)/2;
					turns++;
				}
			}
					
					
		}
		
		label : cout << turns << endl;
	}
}
		
			
			
			
			
			
			
			
			
			
			
			

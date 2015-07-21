#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int g;
		cin >> g;
		
		while(g--)
		{
			int init, n, q;
			cin >> init;
			cin >> n;
			cin >> q;
			
			if(q==1)
			{
				// need to find number of heads
				
				// if init is head, the number of heads is (n-1)/2 is n is odd 
				if(n%2==1)
				{
					if(init == 1)
					{
						cout << (n-1)/2;
					}
					else
					{
						cout << (n+1)/2;
					}
				}
				else
				{
					cout << n/2;
				}
			}
			else
			{
				if(n%2==1)
				{
					if(init == 1)
					{
						cout << (n+1)/2;
					}
					else
					{
						cout << (n-1)/2;
					}
				}
				else
				{
					cout << n/2;
				}
			}
			cout << endl;
		}
	}
	
	return 0;
}
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
					
				

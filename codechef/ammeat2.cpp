#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		
		if(k==1)
		{
			cout << 1 << endl;
		}
		
		else
		{
			if(k<=floor(n/2))
			{
				for(int i=0;i<k;i++)
				{
					cout << 2*(i+1) << " ";
				}
				cout << endl;
			}
			
			else
			{
				cout << -1 << endl;
			}
		}
	}
}

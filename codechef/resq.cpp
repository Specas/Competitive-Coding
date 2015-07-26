#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		
		int min_diff = n;
		
		int sq = sqrt(n);
		
		for(int i=sq;i>=1;i--)
		{
			
			if(n%i==0)
			{
				int div = n/i;
				int d = abs(div-i);
				if(d<min_diff)
				{
					min_diff = d;
				}
			}
		}
		
		cout << min_diff << endl;
	}
				
			
}

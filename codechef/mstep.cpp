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
		
		
		// We store the coordinates of each of the numbers
		
		int xcoord[n*n];
		int ycoord[n*n];
		
		for(int i=0;i<(n*n);i++)
		{
			xcoord[i] = 0;
			ycoord[i] = 0;
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				int t;
				cin >> t;
				
				xcoord[t-1] = i;
				ycoord[t-1] = j;
				
				
			}
		}
		

		
		
		long long int ans = 0;
		
		for(int i=0;i<n*n-1;i++)
		{
			ans = ans + (abs(xcoord[i]-xcoord[i+1])) + (abs(ycoord[i]-ycoord[i+1]));
		}
		
		cout << ans << endl;
		
	}
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		
		int a[m];
		
		int max_dist = 0;
		int min_dist = n-1;
		
		for(int i=0;i<m;i++)
		{
			cin >> a[i];
			if(a[i]>max_dist)
			{
				max_dist = a[i];
			}
			if(a[i]<min_dist)
			{
				min_dist = a[i];
			}
		}
		
		for(int i=0;i<n;i++)
		{
			cout << max(fabs(max_dist-i), fabs(min_dist-i)) << " ";
		}
		
		cout << endl;
	}
	
	return 0;
}
			
			
			
			
			
			
			
			
			
			
			
			

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		
		int a[n];
		
		int minnum;
		int sum = 0;
		
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			
			if(i==0)
			{
				minnum = a[i];
			}
			else
			{
				minnum = min(minnum, a[i]);
			}
			
			sum+=a[i];
		}
		
		cout << sum - (minnum*n) << endl;
		
		
		
	}
}
			
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

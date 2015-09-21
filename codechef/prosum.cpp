#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		long long int n;
		cin >> n;
		
		long long int count = 0;
		long long int ecount = 0;
		for(int i=0;i<n;i++)
		{
			long long int x;
			cin >> x;
			if((x==0)||(x==1))
			{
				// If the number is 1 or 0, then the condition is not satisfied
				count++;
			}
			if(x==2)
			{
				ecount++;
			}
		}
		
		
		long long int ncount = n-count;
		
		// we need to find the combination nc2 as we can select 2. 
		
		long long int ans = (ncount*(ncount-1))/2;
		
		ans = ans - ((ecount*(ecount-1))/2);
				
		cout << ans << endl;
	}
}

#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		
		long long int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		long long int ans = a[0];
		
		long long int curr = a[0];
		
		for(int i=1;i<n;i++)
		{
			curr--;
			
			if(curr<a[i])
			{
				ans = ans + (a[i]-curr);
				curr = a[i];
			}
		}
		
		
		cout << ans << endl;
	}
}
			
				

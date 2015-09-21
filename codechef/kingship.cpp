#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		long long int n;
		cin >> n;
		
		long long int a[n];
		long long int i;
		
		for(i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		sort(a,a+n);
		
		long long int ans = 0;
		
		for(i=1;i<n;i++)
		{
			ans = ans + (a[0]*a[i]);
		}
		
		cout << ans << endl;
	}
}
		
		
		
		

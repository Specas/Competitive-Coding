#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	int t;
	cin >> t;
	
	while(t--)
	{
		long long int n, m, i;
		cin >> n >> m;
		
		long long int a[n];
		for(i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		// sorting in descending
		sort(a, a+n, greater<int>());
		
		long long int ans = 0;
		long long int weight = 0;
		
		
		for(i=0;i<n;i++)
		{
			weight+=a[i];
			ans++;
			
			if(weight>=m)
			{
				
				cout << ans << endl;
				goto label;
			}

		}
		
		cout << -1 << endl;
		
		label:;
	}
	
	return 0;
}

#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		long long int a[3];
		cin >> a[0] >> a[1] >> a[2];
		
		sort(a,a+3);
		
		long long int mod = 1000000007;
		
		long long int ans = ((((a[0]%mod)*((a[1]-1)%mod))%mod)*((a[2]-2)%mod))%mod;
		
		cout << ans << endl;
	}
}
		

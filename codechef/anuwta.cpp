#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		long long int n;
		cin >> n;
		
		// The required distance is give by n + n*(n+1)/2
		
		long long int ans = (n*n+3*n)/2;
		
		cout << ans << endl;
	}
	
	return 0;
}

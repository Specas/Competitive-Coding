#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n,k;
		cin >> n;
		cin >> k;
		
		int a[n];
		int totsum = 0;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			totsum = totsum + a[i];
		}
		
		// we sort the array
		sort(a, a+n);
		
		int wa1 = 0;
		int wa2 = 0;
		int wb1 = 0;
		int wb2 = 0;
		
		for(int i=0;i<k;i++)
		{
			wa1 += a[i];
			wb1 += a[n-i-1];
		}
		
		wa2 = totsum - wa1;
		wb2 = totsum - wb1;
		
		int diff1 = abs(wa1-wa2);
		int diff2 = abs(wb1-wb2);
		
		cout << ((diff1>diff2)?diff1:diff2) << endl;
		
			

		
	}
}

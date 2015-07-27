#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long long int n, d;
	cin >> n >> d;
	
	long long int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
	sort(a, a+n);
	
	int pairs = 0;
	
	for(int i=1;i<n;i++)
	{
		int diff = a[i] - a[i-1];
		if(diff<=d)
		{
			pairs++;
			i++;
		}
	}
	
	cout << pairs;
}
		
	
	
		
		

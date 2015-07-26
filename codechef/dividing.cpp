#include <iostream>
#include <algorithm>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int a[n];
	int totsum = 0;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		totsum += a[i];
	}
	
	int req_sum = (n*(n+1))/2;
	
	if(req_sum == totsum)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}
	
	

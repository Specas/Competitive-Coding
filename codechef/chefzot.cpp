#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
	// we use a dp solution
	int maxsub[n];
	maxsub[0] = 1;
	if(a[0]==0)
	{
		maxsub[0]= 0;
	}
	
	for(int i=1;i<n;i++)
	{
		if(a[i]!=0)
		{
			maxsub[i] = maxsub[i-1]+1;
		}
		else
		{
			maxsub[i] = 0;
		}
	}
	
	int maxans = maxsub[0];
	for(int i=1;i<n;i++)
	{
		maxans = max(maxans, maxsub[i]);
	}
	
	cout << maxans;
}
	
	

#include <iostream>

using namespace std;

int main()
{
	long long int n, k;
	cin >> n >> k;
	
	long long int a[n];
	long long int maximuma = 0;
	long long int maximumb = 0;
	long long int b[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]>maximuma)
		{
			maximuma = a[i];
		}
	}
	
	
	if(k==0)
	{
		for(int i=0;i<n;i++)
		{
			cout << a[i] << " ";
		}
		goto label;
	}
	
	for(int i=0;i<n;i++)
	{
		a[i] = maximuma - a[i];
		if(a[i]>maximumb)
		{
			maximumb = a[i];
		}
	}
	

	
	if(k>=1)
	{
		if(k%2==0)
		{
			for(int i=0;i<n;i++)
			{
				b[i] = maximumb - a[i];
				cout << b[i] << " ";
			}
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				cout << a[i] << " ";
			}
		}
	}
	
	label:;
}
			
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	

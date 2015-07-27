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
		
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		int min=a[0];
		int ans = 0;
		int flag = 1;
		
		for(int i=1;i<n;i++)
		{
			if((a[i]-min)>ans)
			{
				ans = a[i]-min;
				flag = 0;
			}
			if(a[i]<min)
			{
				min = a[i];
			}
		}
		
		if(flag)
		{
			cout << "UNFIT" << endl;
		}
		else
		{
			cout << ans << endl;
		}
	}
	
	return 0;
}
			
			
			
			
			
			
			
			
			
			
			

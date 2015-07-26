#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		
		
		
		string s;
		cin >> s;
		
		int count=0;
		
		if(n==1)
		{
			if((s[0]-'0')==0)
			{
				cout << 1 << endl;
				continue;
			}
		}
		
		for(int i=0;i<n;i++)
		{
			int k = s[i]-'0';
			
			if(i==0)
			{
				// first building
				int next = s[i+1]-'0';
				if((k==0)&&(next==0))
				{
					count++;
				}
			}
			else if(i==(n-1))
			{
				// last element
				int prev = s[i-1]-'0';
				if((k==0)&&(prev==0))
				{
					count++;
				}
			}
			
			else
			{
				int next = s[i+1]-'0';
				int prev = s[i-1]-'0';
				
				if((k==0)&&(prev==0)&&(next==0))
				{
					count++;
				}
			}
		}
		
		cout << count << endl;
	}
}	
				
				

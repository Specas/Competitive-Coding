#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int n,q;
	cin >> n >> q;
	
	string media[n];
	string ext[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> ext[i];
		cin >> media[i];
	}

	
	while(q--)
	{
		string s;
		cin >> s;
		
		// We need to get the text after the final period. This is the extension
		// We then compare this to our media type and print out the result
		
		
		string ex = "";
		
		int len = s.length();
		int flag = 0;
		int flag2 = 0;
		
		for(int i=len-1;i>=0;i--)
		{
			char ch = s[i];
			if(ch=='.')
			{
				flag = 1;
				break;
			}
			else
			{
				ex = ch+ex;
			}
		}
		
		if(flag==0)
		{
			cout << "unknown" << endl;
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				if(ex.compare(ext[i])==0)
				{
					flag2 = 1;
					cout << media[i] << endl;
					break;
				}
			}
			
			if(flag2==0)
			{
				cout << "unknown" << endl;
			}
		}
	}
	
	return 0;
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
				
				
				
				
				
				
				

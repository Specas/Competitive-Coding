#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		string s;
		cin >> s;
		
		int len = s.length();
		int ans = 0;
		int stack = 0;
		int st[1000000];
		int k=0;
		st[0] = 0;
		
		if(s[0] == '>')
		{
			cout << 0 << endl;
			goto label;
		}
		
		for(int i=0;i<len;i++)
		{
			if(s[i] == '<')
			{
				stack++;
				ans++;
			}
			else
			{
				stack--;
				ans++;
			}
			if(stack==0)
			{
				k++;
				st[k] = ans;	

			}
			if(stack<0)
			{
				break;
			}
		}
		
		if(st[k]==0)
			cout << 0 << endl;
		else
			cout << st[k] << endl;
		
		label:;
	}
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
				
			


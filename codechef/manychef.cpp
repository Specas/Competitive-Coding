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
		
		for(int i=len-4;i>=0;i--)
		{
			char c1 = s[i];
			char c2 = s[i+1];
			char c3 = s[i+2];
			char c4 = s[i+3];
			
			if((c1=='?' || c1 == 'C') && (c2=='?' || c2 == 'H') && (c3=='?' || c3 == 'E') && (c4=='?' || c4 == 'F'))
			{
				s[i] = 'C';
				s[i+1] = 'H';
				s[i+2] = 'E';
				s[i+3] = 'F';
			}
			
		}
		
		for(int i=len-1;i>=0;i--)
		{
			char c = s[i];
			if(c=='?')
			{
				s[i] = 'A';
			}
		}
		cout << s << endl;
	}
}

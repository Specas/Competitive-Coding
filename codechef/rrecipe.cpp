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
		
		
		long long int tot = 1;
		
		long int len = s.length();
		
		long int i;
		
		for(i=0;i<((len/2)+(len%2));i++)
		{
			char curr = s[i];
			// the symmetric character
			
			char sym = s[len-i-1];
			
			if((curr=='?')&&(sym=='?'))
			{
				// if both are question marks, we can replace them with any character. Thus 26 different ways
				tot = (tot*26)%10000009;
			}
			
			else if((curr!='?')&&(sym!='?'))
			{
				if(curr!=sym)
				{
					cout << 0 << endl;
					goto label;
				}
							
			}
			

		}
		
		cout << tot << endl;
		
		label:;
	}
	
	return 0;
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			

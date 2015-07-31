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
		
		long long ones = 0;
		
		string s;
		cin >> s;
		
		
		for(int i=0;i<n;i++)
		{
			char c = s[i];
			if(c=='1')
			{
				ones++;
			}
		}
		
		// we can pick substrings in nc2 ways where n = number of ones
		// we must also add the number of ones to the above result to account for unity length substrings
		
		long long subs = (ones*(ones-1))/2;
		
		subs = subs + ones;
		
		cout << subs << endl;
	}
}

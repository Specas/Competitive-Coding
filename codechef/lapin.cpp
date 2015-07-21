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

		
		string left;
		string right;
		
		
		// length of half the string
		int rslen;
		
		
		
		if(len%2==0)
		{
			left = s.substr(0,len/2);
			right = s.substr(len/2, len);
			rslen = len/2;
		}
		else
		{
			left = s.substr(0,len/2);
			right = s.substr((len/2)+1, len);
			rslen = (len-1)/2;
		}

	
		
		// now we check for the frequencies of the characters in each word
		
		int left_freq[26]={0};
		int right_freq[26]={0};
		
		for(int i=0;i<rslen;i++)
		{
			left_freq[int(left[i])-97]++;
			right_freq[int(right[i])-97]++;
		}
		

		
		// checking if they're equal
		
		bool equal = true;
		
		for(int i=0;i<26;i++)
		{
			if(left_freq[i]!=right_freq[i])
			{
				equal = false;
			}
		}
		
		if(equal)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
		

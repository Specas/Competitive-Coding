#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void lower_freq(int [], string);
void upper_freq(int [], string);
void digit_freq(int [], string);

void lower_freq(int a[], string s)
{
	int len = s.length();
	
	for(int i=0;i<len;i++)
	{
		char ch = s[i];
		if(islower(ch))
			a[ch-'a']++;
	}
}

void upper_freq(int b[], string s)
{
	int len = s.length();
	
	for(int i=0;i<len;i++)
	{
		char ch = s[i];
		if(isupper(ch))
			b[ch - 'A']++;
	}
}

void digit_freq(int c[], string s)
{
	int len = s.length();
	
	for(int i=0;i<len;i++)
	{
		char ch = s[i];
		if(isdigit(ch))
			c[ch - '0']++;
	}
}

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		string a,b;
		cin >> a >> b;
		
		int uppera[26] = {0};
		int lowera[26] = {0};
		int digita[10] = {0};
		int upperb[26] = {0};
		int lowerb[26] = {0};
		int digitb[26] = {0};
		
		lower_freq(lowera, a);
		upper_freq(uppera, a);
		digit_freq(digita, a);
		lower_freq(lowerb, b);
		upper_freq(upperb, b);
		digit_freq(digitb, b);
		
		
		int ans = 0;
		
		// adding lower, upper and digits
		
		for(int i=0;i<26;i++)
		{
			ans = ans + min(lowera[i], lowerb[i]);
			ans = ans + min(uppera[i], upperb[i]);
		}
		
		for(int i=0;i<10;i++)
		{
			ans = ans + min(digita[i], digitb[i]);
		}
		
		cout << ans << endl;
	}
}

		
















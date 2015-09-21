#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

string bin(int, int);
int pos(string);

string bin(int n, int k)
{
	
	// The function finds the binary representation of the number n to k digits
	// It returns the reversed binary string
	
	string bs = "";
	
	int tmp = n;
	int d = 0;
	char dc = d;
	int l = 0;
	while(tmp!=0)
	{
		d = tmp%2;
		tmp = tmp/2;
		dc = d + '0';
		bs = bs+ dc;
		l++;
	}
	
	int z = k-l;
	
	for(int i=0;i<z;i++)
	{
		bs = bs + '0';
	}
	
	return bs;
}


int pos(string bin)
{
	// Takes the bin string and retruns the decimal value
	int len = bin.length();
	int dec = 0;
	
	for(int i=0;i<len;i++)
	{
		dec = dec + (bin[i] - '0')*pow(2,len-i-1);
	}
	
	return dec;
}


int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int k;
		cin >> k;
		
		string s;
		cin >>s;
		
		int len = pow(2,k);
		
		string ans = "";
		
		for(int i=0;i<len;i++)
		{
			int cpos = pos(bin(i,k));
			ans = ans + s[cpos];
		}
		
		cout << ans << endl;
		
		
		
	}
}
		
		
		

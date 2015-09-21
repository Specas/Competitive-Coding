#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

string bin(long long int);

string bin(long long int a)
{
	
	// returns binary string representation of the number a 
	long long int d=0;
	long long int tmp = a;
	string binum = "";
	
	while(tmp!=0)
	{
		d = tmp%2;
		tmp = tmp/2;
		char dc = d + '0';
		binum = dc + binum;
	}
	
	return binum;
}

int main()
{
	long long int n;
	cin >> n;
	
	while(n--)
	{
		long long int a,b;
		cin >> a >> b;
		
		string sa = bin(a);
		string sb = bin(b);
		
		long long int k = 0;
		long long z = min(sa.length(), sb.length());
		
		for(int i=0;i<z;i++)
		{
			if(sa[i]==sb[i])
			{
				k++;
			}
			else
			{
				break;
			}
		}
		
		
		cout << (sa.length() + sb.length() - (2*k)) << endl;
	}
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

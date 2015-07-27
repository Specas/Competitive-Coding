#include <iostream>
#include <string>

using namespace std;

int dist(int, int);

int dist(int a, int b)
{
	// returns the number of increments required to convert a to b
	if(b>=a)
	{
		return (b-a);
	}
	else
	{
		int k = 122 - a;
		return (b-96+k);
	}
}

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		
		string s;
		cin >> s;
		
		int len = s.length();
		
		int req_operations = len*11;
		
		int a = (int)s[0];
		int b;
		
		int operations = 1;
		
		for(int i=1;i<len;i++)
		{
			b = (int)s[i];
			operations = operations + dist(a,b);
			a=b;
		}
		
		// displaying operation cost
		operations += len;
		
		if(operations>req_operations)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
}
			
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

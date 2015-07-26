#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		
		if(360%n==0)
		{
			cout << "y ";
		}
		else
		{
			cout << "n ";
		}
		
		if(n<=360)
		{
			cout << "y ";
		}
		else
		{
			cout << "n ";
		}
		
		if(n<=26) // as n*(n+1)/2 must be <=360
		{
			cout << "y";
		}
		else
		{
			cout << "n";
		}
		
		cout << endl;
		
		
	}
	return 0;
}

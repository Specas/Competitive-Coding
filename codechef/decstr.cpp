#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		
		int k;
		cin >> k;
		
		int rem = k%25;
		int div = k/25;
		
		string a = "abcdefghijklmnopqrstuvwxyz";
		string b = "zyxwvutsrqponmlkjihgfedcba";
		
		if(rem)
		{
			while(rem>=0)
			{
				cout << (char)a[rem--];
			}
		}
		while(div--)
		{
			cout << b;
		}
		cout << endl;
		

		
		
	}
		
		
	
		
	
	return 0;
}

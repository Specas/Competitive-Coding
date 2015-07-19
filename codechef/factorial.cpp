#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	for(int i=0;i<t;i++)
	{
		
		int n;
		cin >> n;
		
		int counter = 0;
		
		for(int j=5;n/j>=1;j=j*5)
		{
			counter += (n/j);
		}
		cout << counter << endl;
		
		
		
	}
	return 0;
}
	

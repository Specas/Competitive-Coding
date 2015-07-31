#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		
		int k;
		cin >> k;
		
		int d = 103993/33102;
		int rem = 103993%33102;
		
		if(k==0)
		{
			cout << 3 << endl;
		}
		
		else
		{
			cout << "3.";
			
			for(int i=0;i<k;i++)
			{
				rem = rem*10;
				d = rem/33102;
				rem = rem%33102;
				cout << d;
			}
		}
		cout << endl;
		
	}
	
	return 0;
}
		
	


#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >>t;
	
	while(t--)
	{
		
		int n;
		cin >> n;
		
		int k = n/7;
		bool not_lucky = true;
		
		for(int i=7*k;i>=0;i=i-7)
		{
			if((n-i)%4==0)
			{
				cout << i << endl;
				not_lucky = false;
				break;
			}
		}
		
		if(not_lucky)
		{
			cout << -1 << endl;
		}
	}
	return 0;
}

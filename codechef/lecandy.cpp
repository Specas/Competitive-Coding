#include <iostream>

using namespace std;

int main()
{
	
	int t;
	cin >> t;
	
	for(int i=0;i<t;i++)
	{
		int n,c;
		cin >> n;
		cin >> c;
		
		int sum=0;
		for(int j=0;j<n;j++)
		{
			int k;
			cin >> k;
			sum +=k;
		}
		
		if(sum>c)
		{
			cout << "No"<< endl;
		}
		else
		{
			cout << "Yes" << endl;
		}
	}
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	long long int n, m;
	cin >> n >> m;
	
	// upper and lower limits
	
	long long int a = n+2;
	
	long long int b = 3*n;
	
	for(int i=0;i<m;i++)
	{
		long long int q;
		cin >> q;
		
		if((q<a)||(q>b))
		{
			// invalid. Outside range
			cout << 0 << endl;
		}
		
		else
		{
			long long int leftd = q-a;
			long long int rightd = b-q;
			
			long long int d = min(leftd, rightd);
			
			cout << (d+1) << endl;
		}
	}
	
	return 0;
}

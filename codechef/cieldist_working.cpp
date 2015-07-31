#include <iostream>

using namespace std;
 
int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int ds,dt,d;
		cin >> ds >> dt >> d;
		int max = ds - dt - d;
		int a = dt - ds - d;
		int b = d - ds - dt;
		int c = 0;
		if(a>max)
			max = a;
		if(b>max)
			max = b;
		if(c>max)
			max = c;
		cout << max << endl;
	}
	return 0;
}

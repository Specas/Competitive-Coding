#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	cout << fixed << showpoint;
	
	while(t--)
	{
		int ds, dt, d;
		cin >> ds >> dt >> d;
		double d2 = d/2;
		
		if((ds+dt)<d)
		{
			cout << setprecision(20) << (d-(ds+dt)) << endl;
		}
		else
		{
		
			double x = sqrt(ds*ds - d2*d2);
			double y = sqrt(dt*dt - d2*d2);
			
			double ans = abs(x-y);
			
			cout << setprecision(20)  << ans  << endl;
		}
	}
}

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		string st1, st2;
		cin >> st1;
		cin >> st2;
		double d;
		cin >> d;
		
		int hour_min1 = atoi(st1.substr(0,2).c_str())*60;
		int min1 = atoi(st1.substr(3, 2).c_str());
		
		int hour_min2 = atoi(st2.substr(0,2).c_str())*60;
		int min2 = atoi(st2.substr(3, 2).c_str());
		
		double tmin1 = hour_min1+min1;
		double tmin2 = hour_min2+min2;
		
		double t1, t2;
		
		// time taken in case 1
		
		double diff = tmin1 - tmin2;
		
		t1 = diff + d;
		
		if(diff>=(2*d))
		{
			t2 = diff;
		}
		
		else
		{
			// They meet in between

				t2 = d + (diff/2);
			
		}
		
		cout << std::setprecision(1) << fixed << t1 << " " << t2 << endl;
	}
}
		
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		

		


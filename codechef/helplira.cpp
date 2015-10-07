#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	
	float max_area = 0.0;
	int max_pos = 0;
	float min_area = 0.0;
	int min_pos = 1;
	int count = 0;
	
	float ans;
	
	while(n--)
	{
		
		++count;
	
		int x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		
		
		// Area is propotional to the sum of the lengths of all the sides
		ans = fabs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));

		
		if(count==1)
		{
			min_area = ans;
		}
		
		if(ans>=max_area)
		{
			max_area = ans;
			max_pos = count;
		}
		if(ans<=min_area)
		{
			min_area = ans;
			min_pos = count;
		}
	}
	
	cout << min_pos << " " << max_pos;
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	

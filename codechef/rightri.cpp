#include <iostream>
#include <math.h>

using namespace std;



int main()
{
	
	int n;
	cin >> n;
	
	int count = 0;
	
	while(n--)
	{
		int x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		
		int s1 = (int)(pow(y1-y2,2)+pow(x1-x2,2));
		int s2 = (int)(pow(y1-y3,2)+pow(x1-x3,2));
		int s3 = (int)(pow(y2-y3,2)+pow(x2-x3,2));
		if(s1 >= s2 && s1 >= s3)
		{
			if(s2 + s3 == s1)
				count++;
		}
		else if(s2 >= s1 && s2 >= s3)
		{
			if(s1 + s3 == s2)
				count++;
		}
		else if(s3 >= s1 && s3 >= s2)
		{
			if(s1 + s2 == s3)
				count++;
			}
		
		
		
		
	}
	
	cout << count;
	
	return 0;
}

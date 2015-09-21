#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	
	long long int t;
	cin >> t;
	
	// The sequential numbers occur in the form of fibonacci series
	// 1,2,3,3,4,4,4,5,5,5,5,5,6,6,6,6,6,6,6,6..
	// 1 occurs 1 time
	// 2 occurs 1 time
	// 3 occurs 2 times
	// 4 occurs 3 times
	// 5 occurs 5 times
	// 6 occurs 8 times
	// and so on
	
	while(t--)
	{
		
		long long int num;
		cin >> num;
	
		long long int a = 1;
		long long int b = 1;
		long long int sum = a+b;
		long long int key = 3;
		
		if(num==1)
		{
			cout << 1 << endl;
			goto end;
		}
		else if(num == 2)
		{
			cout << 2 << endl;
			goto end;
		}
		
		for(long long int i=2;i<num;)
		{
			long long int req = num-1;

			if((i<=req)&&((i+sum-1)>=req))
			{
				cout << key << endl;
				goto end;
			}
			
			i = i + sum;

			a = b;
			b = sum;
			sum = a+b;
			key++;
		}

		end:;
	}
}






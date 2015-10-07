#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <math.h>

using namespace std;

int main()
{
	
	long long int a[1000000] = {0};
	a[0] = 5;
	
	// generating all primitive pythagorean triplet hypotenuses
	
	int pos = 0;
	long long int k = 0;
	
	for(int i=2;;i++)
	{
		// m = i
		
		int jin = 0;
		
		if(i%2==0)
		{
			jin = 1;
		}
		else
		{
			jin = 2;
		}
			// n must be odd
			for(int j=jin;j<i;j=j+2)
			{
				k = i*i + j*j;
				//~ cout << k << endl;
				if(k<=5000000)
				{
					a[++pos] = k;
				}
				else
				{
					goto end;
				}
			}
		

	}
	
	
	
	end:;
	
	cout << pos;
	
	for(int i=0;i<50;i++)
	{
		cout << a[i] << endl;
	}
	
}



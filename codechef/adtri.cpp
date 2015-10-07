#include <iostream>
#include <math.h>
#include <cstdio>
#include <algorithm>

using namespace std;






int main()
{
	
	// -----------------------------------------------------------------
	
	int nn = 981183;
	
	long long int a[981183] = {0};
	
	// generating all primitive pythagorean triplet hypotenuses
	
	int pos = -1;
	long long int k = 0;
	
	for(int i=2;;i++)
	{
		
		int jin = 0;
		
		if(i%2==0)
		{
			jin = 1;
		}
		else
		{
			jin = 2;
		}
			for(int j=jin;j<i;j=j+2)
			{
				k = i*i + j*j;
				if(k<=5000000)
				{
					a[++pos] = k;
				}
				else
				{
					if(j==1 || j==2)
					{
						goto end1;
					}
					
					goto start;
				}
			}
			
			start:;
	
	}
	
	end1:;
	
	sort(a, a+nn);
	
	
	//~ for(int i=0;i<100;i++)
	//~ {
		//~ cout << a[i] << endl;
	//~ }
	

	
	
	
	//---------------------------------------------------------------
	
	
	
	long long int t;
	scanf("%lld", &t);
	
	
	while(t--)
	{
		long long int n = 354526;
		
		//~ scanf("%lld", &n);
		
		long long div = n/5;
		
		long long int num = 0;
		
		for(long long int i=div;i>=1;i--)
		{
			if(n%i==0)
			{
				num = n/i;
				break;
			}
		}
		
		
		//~ cout << num << " " << 1000000 - t <<endl;
	}
	
	cout << "done";
}
		
		

		

		

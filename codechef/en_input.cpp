#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	long int n,k;
	scanf("%ld %ld", &n, &k);
	
	long int count = 0;
	
	for(long i=0;i<n;i++)
	{
		long int num;
		scanf("%ld", &num);
		
		if(num%k==0)
		{
			++count;
		}
	}
	printf("%ld", count);
	
	return 0;
}

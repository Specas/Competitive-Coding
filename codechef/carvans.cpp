#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		int n;
		scanf("%d", &n);
		
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
		}
		

		
		int number_of_max = 1; // because the first car always moves at max speed
		
		for(int i=1;i<n;i++)
		{
			if(a[i]>a[i-1])
			{
				// This car cannot move at its max speed as the car before it is slower
				a[i] = a[i-1];
			}
			else
			{
				
				number_of_max++;
			}
		}
		
		printf("%d", number_of_max);
		printf("\n");
	}
	
	return 0;
}

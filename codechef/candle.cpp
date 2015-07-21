#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		
		int arr[10];
		
		for(int i=0;i<10;i++)
		{
			scanf("%d", &arr[i]);
		}
		
		// We find the smallest number and its position
		
		int min = arr[1];
		int pos = 1;
		
		for(int i=2;i<10;i++)
		{
			if(arr[i]<min)
			{
				min = arr[i];
				pos = i;
			}
		}
		
		// Its a special case if arr[0] is the smallest. This means that the required number must be a power of 10
		
		if(arr[0]<min)
		{
			min = arr[0];
			pos = 0;
		}
		
		
		// For the special case, there are 'min+1' number of zeroes
		if(pos == 0)
		{
			printf("1");
			for(int j=1;j<=(min+1);j++)
			{
				printf("0");
			}
			printf("\n");
		}
		else
		{
			// The number is of the form 'xxx..' where is any digit.
			// The number of copies of the digit is again 'min+1'
			// The digit is 'pos' as it is the position with the least frequency
			for(int j=1;j<=(min+1);j++)
			{
				printf("%d", pos);
			}
			printf("\n");
		}
	}
	
	return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

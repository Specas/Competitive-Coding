#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	
	int arr[1000001] = {0};
	
	for(int i=0;i<t;i++)
	{
		int n;
		scanf("%d", &n);
		arr[n]++;
	}
	
	for(int i=0;i<1000001;i++)
	{
		while(arr[i]>0)
		{
			printf("%d\n", i);
			--arr[i];
		}
	}
	return 0;
}

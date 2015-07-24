#include <iostream>

using namespace std;


void selection_sort(int *, int);
int fact(int);
int ncr(int , int);

void selection_sort(int *arr, int size)
{
	
	int len = size;
	int minVal = 0;
	int minPos = 0;
	
	for( int i = 0; i<len-1; i++)
	{
		 minVal = arr[i];
		 minPos = i;
		 

		 for(int j = i+1; j<len; j++)
		 {
			 if (arr[j] < minVal)
			 {
				 minVal = arr[j];
				 minPos = j;
			 }
		 }

		 swap(arr[i], arr[minPos]);

	 }

 }
 
 int fact(int n)
 {
	 int prod = 1;
	 for(int i=1;i<=n;i++)
	 {
		 prod = prod*i;
	 }
	 
	 return (int)prod;
 }
 
 
 int ncr(int n, int r)
 {
	 return (int)(fact(n))/(fact(r)*fact(n-r));
 }
 


int main()
{
	
	
	int t;
	cin >> t;
	
	while(t--)
	{
		
		int a[12];
		int count[101] = {0};
			
		for(int i=1;i<=11;i++)
		{
			cin >> a[i];
			// incrementing count
			count[a[i]]++;
		}
		
		
		// sorting
		selection_sort(a, 12);
		
		
		int k;
		cin >> k;
		
		int sum = 0;
		
		for(int i =11;i>=1;i--)
		{
			if(a[i]==a[i-1])
			{
				continue;
			}
			
			sum = sum + count[a[i]];
			
			if(sum>=k)
			{
				// Out of n same numbers, we can select r of them in ncr ways
				cout << ncr(count[a[i]], sum-k)<< endl;
				break;
			}
		}
	}
			
		
		
	return 0;
	
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

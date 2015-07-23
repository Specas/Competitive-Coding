#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		
		// arrival and departure times
		
		int a[n], b[n];
		
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin >> b[i];
		}

		
		// we now need to sort the arrays in ascending order of arrivals
		
		// We use selection sort
		
		// selection sort routine starts ---------------------------------------------------------
		
		int min;
		int minpos;
		int tmp;
		
		
		for(int i=0;i<n-1;i++)
		{
			min = a[i];
			minpos = i;
			
			
			for(int j=(i+1);j<n;j++)
			{
				
				if(a[j]<min)
				{
					minpos = j;
					min = a[j];
				}
			}
			
			//swap a and b
			tmp = a[i];
			a[i] = a[minpos];
			a[minpos] = tmp;
			
			tmp = b[i];
			b[i] = b[minpos];
			b[minpos] = tmp;
		}
		

		// sorting routine ends --------------------------------------------------------------------

		
		
		// we run the time till 1000 and find the max
		// At each time, we find the number of currently residing guests and get the max over the entire iteration
		
		int max_guests = 0;
		int guests = 0; // initially
		
		for(int i=a[0];i<=1000;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==a[j])
				{
					guests++;
					if(guests>max_guests)
					{
						max_guests = guests;
					}
				}
				
				if(i==b[j])
				{
					guests--;
					a[j] = -1;
					b[j] = -1;
				}
			}
		}
		
		cout << max_guests << endl;
	}
	
	return 0;
}	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

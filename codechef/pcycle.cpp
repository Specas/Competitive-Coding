#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int i;
	int a[n];
	int b[n];
	
	for(int i=0;i<n;i++)
	{
		// two arrays for the 2 program cycles
		cin >> a[i];
		b[i] = a[i];
	}
	
	
	int no_of_cycles = 0;
	
	int pos = 0;
	int val = 0;
	

	// In the first cycle, we calculate the no of cycles
	
	while(true)
	{
		int initpos = pos;
		

		while(true)
		{
			val = a[pos];
			if(val == (initpos+1))
			{

				no_of_cycles++;
				a[pos] = -1;
				break;
			}
				
				

			a[pos] = -1;
			pos = val-1;
		
		}
		
		// finding the next starting position
		for(i=0;i<n;i++)
		{
			if(a[i]!=-1)
			{
				pos=i;
				break;
			}
		}
		
		// If all the elements are -1, then we all our cycles are done
		if(i==n)
		{
			break;
		}
	}
	cout << no_of_cycles << endl;


	pos = 0;
	val = 0;
	
	// in the second cycle, we print the cycles

	while(true)
	{
		int initpos = pos;
		
		cout << (pos+1) << " ";

		while(true)
		{
			val = b[pos];
			if(val == (initpos+1))
			{
				cout << val << " " << endl;

				no_of_cycles++;
				b[pos] = -1;
				break;
			}
				
				
			cout << val << " ";


			b[pos] = -1;
			pos = val-1;
		
		}
		
		// finding the next starting position
		for(i=0;i<n;i++)
		{
			if(b[i]!=-1)
			{
				pos=i;
				break;
			}
		}
		
		// If all the elements are -1, then we all our cycles are done
		if(i==n)
		{
			break;
		}
	}
	
	return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
	

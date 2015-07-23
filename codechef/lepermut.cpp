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
		
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		// a O(n) algorithm to compute the required results
		
		int current_max = a[0];
		int current_max_pos = 0;
		
		
		int inv = 0;
		int local_inv = 0;
		
		for(int i=1;i<n;i++)
		{
			// We traverse through the matrix
			// If we find that a number is more than the previous, then it becomes current_max
			// we compare the current_max with the next elements
			// If any element is smaller than the previous, it becomes a local inversion. In other cases, it counts as a normal inversion and a
			// local inversion
			
			if(a[i]>current_max)
			{
				current_max = a[i];
				current_max_pos = i;
			}
			else
			{
				// If any element other than the immediately next one is smaller
				if(i-current_max_pos>1)
				{
					inv++;
				}
				else
				{
					// local inversion
					local_inv++;
					inv++;
				}
			}
		}
		
		if(inv==local_inv)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	
	return 0;
}
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
			

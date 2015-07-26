#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int t;
	cin >>t;
	
	while(t--)
	{
		int n,a,b;
		cin >> n;
		cin >> a;
		cin >> b;
		
		// arrays to store the binary representation
		
		int aa[n];
		int bb[n];
		
		for(int i=0;i<n;i++)
		{
			aa[i] = 0;
			bb[i] = 0;
			
		}
		
		int atmp = a;
		int btmp = b;
		int k=n-1;
		
		// storing the binary representation
		
		while(atmp!=0)
		{
			int rem = atmp%2;
			aa[k] = rem;
			k--;
			atmp = atmp/2;
		}
		
		k = n-1;
		
		while(btmp!=0)
		{
			int rem = btmp%2;
			bb[k] = rem;
			k--;
			btmp = btmp/2;
		}
		
		//~ for(int i=0;i<n;i++)
		//~ {
			//~ cout << aa[i];
		//~ }
		//~ cout << endl;
		//~ for(int i=0;i<n;i++)
		//~ {
			//~ cout << bb[i];
		//~ }
		//~ cout << endl;
		
		
		// we now calculate the number of 1's and 0's in both the binary numbers
		
		int aone=0;
		int bone = 0;
		int azero = 0;
		int bzero = 0;
		
		for(int i=0;i<n;i++)
		{
			if(aa[i]==0)
			{
				azero++;
			}
			if(aa[i] == 1)
			{
				aone++;
			}
			if(bb[i] == 0)
			{
				bzero++;
			}
			if(bb[i] == 1)
			{
				bone++;
			}
		}
		
		// The binary representation of the max xor result would start with all 1's on the left and continue
		
		// Now we find the max one's and zero's values
		
		int maxone = (aone>bone)?aone:bone;
		int maxzero = (azero>bzero)?azero:bzero;
		
		// first array with all the 1's in front
		
		
		int no = 0;
		
		if((n-maxzero)<=(n-maxone))
		{
			no = maxone + n-maxzero;
		}
		else
		{
			int k = (n-maxzero) - (n-maxone);
			no = maxone + (n-maxone) - k;
		}
			
		
		
		

		
		//~ for(int i=0;i<n;i++)
		//~ {
			//~ cout << aa[i];
		//~ }
		//~ cout << endl;
		//~ 
		//~ for(int i=0;i<n;i++)
		//~ {
			//~ cout << bb[i];
		//~ }
		//~ cout << endl;
		
		int num = 0;
		
		for(int i=0;i<no;i++)
		{
			num = num + pow(2,n-i-1);
			
		}
		
		cout << num << endl;
		
		

			
	}
	
	
	
}

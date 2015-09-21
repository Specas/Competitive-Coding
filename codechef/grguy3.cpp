#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		string a,b;
		cin >> a >> b;
		
		int len = a.length();
		int times = 0;

		
		int arr[len];
		int brr[len];
		
		if((a[0]=='.')&&(b[0]=='#'))
		{
			arr[0] = 0;
			brr[0] = -1;
		}
		else if((a[0]=='#')&&(b[0]=='.'))
		{
			arr[0] = -1;
			brr[0] = 0;
		}
		else if((a[0]=='.')&&(b[0]=='.'))
		{
			arr[0] = 0;
			brr[0] = 0;
		}
		
		else
		{
			cout << "No" << endl;
			goto label;
		}
		
		// A dynamic programming solution (similar to assembly line dp problem)
		
		for(int i=1;i<len;i++)
		{
			char c1 = a[i];
			char c2 = b[i];
			
			if((c1=='#')&&(c2=='#'))
			{
				cout << "No" << endl;
				goto label;
			}
			
			else if(c2=='#')
			{
				brr[i] = -1;
				if(arr[i-1]!=(-1))
				{
					arr[i] = arr[i-1];
				}
				else
				{
					arr[i] = brr[i-1]+1; // one jump
				}
			}
			else if(c1=='#')
			{
				arr[i] = -1;
				if(brr[i-1]!=(-1))
				{
					brr[i] = brr[i-1];
				}
				else
				{
					brr[i] = arr[i-1]+1; // one jump
				}
			}
			else
			{
				if(arr[i-1]!=(-1))
				{
					arr[i] = arr[i-1];
				}
				else
				{
					arr[i] = brr[i-1]+1;
				}
				if(brr[i-1]!=(-1))
				{
					brr[i] = brr[i-1];
				}
				else
				{
					brr[i] = arr[i-1]+1;
				}
			}
		}
		

		
		if(a[len-1]=='#')
		{
			times = brr[len-1];
		}
		else if(b[len-1]=='#')
		{
			times = arr[len-1];
		}
		else
		{
			times = min(arr[len-1],brr[len-1]); // min jumps
		}
		
		cout << "Yes" << endl << times << endl;
		
		label :;
	}
}
		

		

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

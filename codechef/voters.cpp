#include <iostream>
#include <cstdio>

using namespace std;



// The funciton getMajority returns the key if atleast 2 of the keys are same. Else returns -1
int getMajority(int, int, int);

int getMajority(int keyx, int keyy, int keyz)
{
	
	if((keyx==keyy)&&(keyy==keyz))
	{
		return keyx;
	}
	
	else if(keyx==keyy)
	{
		return keyx;
	}
	else if(keyy==keyz)
	{
		return keyy;
	}
	else if(keyx==keyz)
	{
		return keyz;
	}
	else
	{
		// All are different
		return -1;
	}
}
	
	
	

int main()
{
	int na, nb, nc;
	scanf("%d", &na);
	scanf("%d", &nb);
	scanf("%d", &nc);
	
	int a[na], b[nb], c[nc];
	
	for(int i=0;i<na;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=0;i<nb;i++)
	{
		scanf("%d", &b[i]);
	}
	for(int i=0;i<nc;i++)
	{
		scanf("%d", &c[i]);
	}
	
	// We initialize 3 pointers to point to the current elements of the 3 arrays
	
	int x=0;
	int y=0;
	int z=0;
	
	// max length of the array answer
	
	int nn = (na>nb)?((na>nc)?na:nc):((nb>nc)?nb:nc);
	
	int ans[nn];
	
	int minkey;
	int keyx, keyy, keyz;
	
	int init = -1;
	
	int k=0;
	
	while(true)
	{
		
		if(x>(na-1))
		{
			keyx = a[na-1];
		}
		else
		{
			keyx = a[x];
		}
		if(y>(nb-1))
		{
			keyy = b[nb-1];
		}
		else
		{
			keyy = b[y];
		}
		if(z>(nc-1))
		{
			keyz = c[nc-1];
		}
		else
		{
			keyz = c[z];
		}
		
		
		//~ cout << keyx << " " << keyy << " " << keyz << endl << endl;
		
	
		int newkey = getMajority(keyx, keyy, keyz);
		
		if(newkey!=-1)
		{
		
			if(init==-1)
			{
				
				init = newkey;
				ans[k++]=newkey;
			}
			else
			{
				if(newkey!=init)
				{
					// to avoid repetition
					ans[k++]=newkey;
					init = newkey;
				}
				
			}
		}
		
		
		if((x>=(na-1))&&(y>=(nb-1))&&(z>=(nc-1)))
		{
			break;
		}
		
		// min of keyx, keyy and keyz
		
		if((x<(na-1))&&(y<(nb-1))&&(z<(nc-1)))
		{
			
			minkey = (keyx<keyy)?((keyx<keyz)?keyx:keyz):((keyy<keyz)?keyy:keyz);
		}
		else if((x<(na-1))&&(y<(nb-1)))
		{
			minkey = (keyx<keyy)?keyx:keyy;
		}
		else if((y<(nb-1))&&(z<(nc-1)))
		{
			minkey = (keyy<keyz)?keyy:keyz;
		}
		else if((x<(na-1))&&(z<(nc-1)))
		{
			minkey = (keyx<keyz)?keyx:keyz;
		}
		else if(x<(na-1))
		{
			minkey = keyx;
		}
		else if(y<(nb-1))
		{
			minkey = keyy;
		}
		else if(z<(nc-1))
		{
			minkey = keyz;
		}
		
		
		// We increment the positions with lowest keys
		
		if(keyx==minkey)
		{
			x++;
			
		}
		if(keyy==minkey)
		{
			y++;
			
		}
		if(keyz==minkey)
		{
			z++;
			
		}
		

	}
	
	printf("%d", k);
	printf("\n");
	for(int i=0;i<k;i++)
	{
		printf("%d", ans[i]);
		printf("\n");
	}
	
	return 0;
}
				
			
		
		
		
		
		
		
		
		
		
		


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

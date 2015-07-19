#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	for(int i=0;i<t;i++)
	{
		string s;
		cin >> s;
		int holes = 0;
		
		for(int j=0;(unsigned)j<s.length();j++)
		{
			
			char c = s[j];
			switch(c)
			{
				case 'A': holes+=1;
						  break;
			    
			    case 'B': holes+=2;
						  break;
				
				case 'D': holes+=1;
						  break;
						  
				case 'O': holes+=1;
						  break;
						  
				case 'P': holes+=1;
						  break;
						  
				case 'R': holes+=1;
						  break;
						  
				case 'Q': holes+=1;
						  break;
					  }
				  }
		  cout << holes << endl;
		  
	  }
	  return 0;
  }
						  
						  
						  
						  
						  
						  
						  
	

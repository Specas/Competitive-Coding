#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		long long int m;
		double p;
		
		cin >> m >> p;
		
		double chef, robber;
		
		double initial_money = 1000000000.0;
		
		double initial_half_money = 1000000000.0/2;
		
		
		double final_money = initial_money * pow(p, m-1);
		
		
		if(final_money == initial_half_money)
		{
			chef = initial_half_money;
			robber = initial_half_money;
			
		}
		
		else if(final_money > initial_half_money)
		{
			
			if(m%2==1)
			{
				chef = final_money;
				robber = 0.0;
			}
			else
			{
				chef = 0.0;
				robber = final_money;
			}
		}
		
		else
		{
			if(m>1)
			{
				chef = 500000001.0;
				robber = initial_money*pow(p,1) - chef;
			}
				
		}
		
		cout << std::setprecision(5) << std::fixed << chef << " " << robber << endl;
	}
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			

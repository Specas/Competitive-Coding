#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to check for prime

// Using the normal greedy algorithm in this implementation of the problem

bool is_prime(int num)
{
	
	int count = 0;
	
	for(int j=1;j<=num;j++)
	{
		if(num%j==0)
		{
			count++;
		}
	}
	
	if(count == 2)
	{
		//prime
		return true;
	}
	else
	{
		return false;
	}
}

// Function to check if the number is palindrome

bool is_palin(int num)
{
	int d;
	int tmp = num;
	int rev=0;
	
	while(tmp!=0)
	{
		d = tmp%10;
		rev = rev*10+d;
		tmp = tmp/10;
	}
	
	if(rev == num)
	{
		return true;
	}
	else
	{
		return false;
	}
	
		
}
	
	
	

int main()
{
	int n;
	cin >> n;
	
	for(int i=n;;i++)
	{
		//Check if palindrome
		if(is_palin(i))
		{
			// Check for prime
			if(is_prime(i))
			{
				cout << i;
				break;
			}
		}
	}
	
	return 0;
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			


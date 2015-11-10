#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <list>
#include <limits.h>
#include <queue>
#include <stack>
#include <vector>
#include <stdlib.h> 

using namespace std;

long long int arr[1000005];

long long int getSum(long long int FTree[], int n,  int index)
{
	long long int sum = 0;
	
	// index in binary tree is one more than the index in the array
	index +=1;
	
	// Traverse ancestors
	while(index>0)
	{
		sum+=FTree[index];
		
		index -= index & (-index);
	}
	
	return sum;
}

// update nodes by adding 'val' to the node 'index'
void updateFTree(long long int *FTree, int n,  int index, long long int val)
{
	index += 1;
	
	while(index<=n)
	{
		FTree[index] += val;
		index += index & (-index);
	}
}

// Construction of fenwick tree of size n
long long int *constructFTree(long long int arr[], int n)
{
	long long int *FTree = new long long int[n+1];
	for(int i=1;i<=n;i++)
	{
		FTree[i] = 0;
	}
	
	// Store the actual values by using update
	for(int i=0;i<n;i++)
	{
		updateFTree(FTree, n, i, arr[i]);
	}
	
	return FTree;
}



int main()
{
	long long int n,q;
	cin >> n >> q;
	
	
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	long long int *FTree = constructFTree(arr, n);
	
	while(q--)
	{
		char ch;
		int a, b;
		
		cin >> ch >> a >> b;
		
		if(ch=='S')
		{
			if(a==0)
			{
				cout << getSum(FTree, n, b) << endl;
			}
			else
			{
				cout << getSum(FTree, n, b) - getSum(FTree, n, a-1) << endl;
			}
		}
		
		else if(ch == 'G')
		{
			arr[a]+=b;
			updateFTree(FTree, n, a, b);
		}
		else if(ch == 'T')
		{
			arr[a]-=b;
			updateFTree(FTree, n, a, -b);
		}
	}
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

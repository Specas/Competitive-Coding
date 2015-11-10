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

int a[1000005] = {0};

int getSum(int FTree[], int n, int index)
{
	int sum = 0;
	
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
void updateFTree(int *FTree, int n, int index, int val)
{
	index += 1;
	
	while(index<=n)
	{
		FTree[index] += val;
		index += index & (-index);
	}
}

// Construction of fenwick tree of size n
int *constructFTree(int arr[], int n)
{
	int *FTree = new int[n+1];
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
	int n,m,c;
	scanf("%d%d%d", &n, &m, &c);
	
	for(int i=0;i<n;i++)
	{
		a[i] = c;
	}
	
	int *FTree = constructFTree(a, n);
	
	while(m--)
	{
		char ch;
		int aa;
		cin >> ch >> aa;
		
		if(ch=='S')
		{
			int bb, cc;
			cin >> bb >> cc;
			
			
	
	

























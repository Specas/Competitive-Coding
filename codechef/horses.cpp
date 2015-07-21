#include <iostream>

using namespace std;

void merge(int arr[], int, int, int, int);
void mergeSort(int arr[], int, int, int);

void merge( int arr[], int p, int q, int r, int n)
{
	

	int i,j,k,c[n];
	
	i = p;
	k = p;
	j = q+1;
	
	while((i<=q)&&(j<=r))
	{
		if(arr[i]<arr[j])
		{
			c[k] = arr[i];
			k++;
			i++;
		}
		else
		{
			c[k] = arr[j];
			k++;
			j++;
		}
	}
	
	while(i<=q)
	{
		c[k] = arr[i];
		k++;
		i++;
	}
	
	while(j<=r)
	{
		c[k] = arr[j];
		k++;
		j++;
	}

	
	for(int i=p;i<k;i++)
	{
		arr[i] = c[i];
	}
	
}

void mergeSort(int arr[], int p, int r, int n)
{

	if(p<r)
	{
		int q = (p+r)/2;
		mergeSort(arr, p, q, n);
		mergeSort(arr, q+1, r, n);
		merge(arr, p, q, r, n);
	}
}



int main()
{
	int t;
	cin >> t;
	
	for(int i=0;i<t;i++)
	{
		int n;
		cin >> n;
		
		int a[n];
		
		for(int j=0;j<n;j++)
		{
			cin >> a[j];
		}
		
		// we sort using merge sort
		
		mergeSort(a, 0, n-1, n);
		
		// We find the different between 2 consecutive terms. The lowest such difference throughout the array gives us the required answer
		// This is because we sort the array first.
		
		int min = a[1]-a[0];
		
		for(int j=0;j<n-1;j++)
		{
			int tmin = a[j+1]-a[j];
			if(tmin<min)
			{
				min = tmin;
			}
		}
		
		cout << min << endl;
		
		
		
		
	}
	return 0;
}



























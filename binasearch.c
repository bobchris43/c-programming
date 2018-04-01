#include <stdio.h>
#define SIZE 10

int read_array(int a[], int n);
int binary_search(int a[], int n, int key);

int main()
{
	int arr[SIZE], n, key, pos;
	printf("Enter the number of elements of array. Max is %d\n", SIZE);
	scanf("%d", &n);
	
	if(n<0 || n>SIZE)
	{
		printf("Invalid size\n");
		return 0;
	}
	printf("Enter %d elements\n", n);
	read_array(arr,n);
	printf("Enter the key element to search\n");
	scanf("%d", &key);
	pos = binary_search(arr, n, key);
	if(pos)
	printf("Element found at position:%d\n", pos);
	else
	printf("Element not found\n");
}
/*Function to Read Array*/
int read_array(int a[], int n)
{
	int i;
	
	for(i=0;i<n;i++)
	scanf("%d", &a[i]);
}
/*Function for Binary Search*/
int binary_search(int a[], int n, int key)
{
	int low,mid,high;
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key== a [mid])
		{
			return mid+1;
		}
		if(key<a[mid])
		high=mid-1;
		else
		low=mid+1;
	}
	return 0;
}

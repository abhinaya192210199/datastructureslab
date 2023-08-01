#include<stdio.h>
void main()
{
	int n,i;
	printf("enter number of elements in the array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d elements in the array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("even numbers in the array are:");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		   printf("%d",arr[i]);
	}
	printf("\nodd numbers in the array are:");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==1)
		  printf("%d",arr[i]);
	}
}

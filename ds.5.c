#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,fact;
	printf("enter a number:");
	scanf("%d",&n);
	if(n<0)
	printf("error!please enter any positive number");
	else
	{
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		printf("factorial of number %d=%llu",n,fact);
	}
	
}

#include<stdio.h>
int main ()
{
	int a[10],i,n;
	
	printf("enter no of array");
	scanf("%d",&n);
	
	printf("enter the number");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("display the number");
	for(i=n-1;i>=0;i--)
	{
	printf("%d",a[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("enter the number");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
		
	}++
		printf("factorial is %d",fact);

	return 0;
}

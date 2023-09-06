#include<stdio.h>
int main()
{
	int a[5],b[5],c[15],i,n,m;
	printf("enter m,n");
	scanf("%d %d",&n,&m);
	
	printf("enter a");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("enter b");
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	 for(i=0;i<n+m;i++)
	{
		if(i<n)
		c[i]=a[i];
		else
		c[i]=b[i-n];
	}
	for(i=0;i<(n+m);i++)
	printf("%d\t",c[i]);
	return 0;
}

#include<stdio.h>
int main()
{
int a[100],i,n,first,last,mid, search;
printf("enter the number of elements in array\n");
scanf("%d",&n);

printf("enter the number\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("enter the number to search\n");
scanf("%d",&search);
first=0;
	last=n-1;
	mid=(first+last)/2;
while(first<=last)
{
  if(a[mid]<search)
  first=mid+1;
  else if(a[mid]==search)
  {
  	printf("%d is found in the location %d.\n",search,mid+1);
  	break;
  }
  else
  last=mid-1;
  	mid=(first+last)/2;
}
  if(first>last)
  printf("%d is not found in the location.\n",search);
  return 0;
}

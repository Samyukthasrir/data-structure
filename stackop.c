#include<stdio.h>
#include<stdlib.h>
#define size 5

int top=-1,stk[size];

void push()
{
	int ele;
	printf("enter element");
	scanf("%d",&ele);
	if (top==size-1)
 		printf("stack is overfull");
 else
 {
 	top=top-1;
 	stk[top]=ele;
 }
}

void pop()
{ 
	int ele;
	if(top==-1)
		printf("the stack is empty");
	else
	{
		ele=stk[top];
		top=top-1;
		print("the default element=%d",ele);
	}
}

void peak()
{
	if(top==-1)
	printf("stack is empty");
	else
	printf("the top of the stack=%d",stk[top]);
}

void display()
{
	int i;
	if(top==-1)
	printf("the stack is empty");
	else
	{
		for(i=top;i>=0;i--)
		printf("%d\n",stk[i]);
	}
}

int main()
{
	int cho;
	do
	{
		printf("*** main menu***");
		printf("\n1.push\n2.pop\n3.peek\n4.dispay\n5.exit");
		printf("enter your choice");
		scanf("%d",&cho);
		
		switch (cho)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:peek();break;
			case 4:display;break;
			case 5:exit(0);
			default:printf("enter number between 1 to 5");
		}
	}	while(cho>=0 && cho<=5);
}
			

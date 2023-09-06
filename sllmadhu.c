#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
int data;
struct node*next;
}*head=NULL,*p,*t,*newnode;
void create()
{
     	int n,i,ele;
	    printf("enter n");
	    scanf("%d",&n);
	 
	 for(i=0;i<n;i++)
	 {
	 	printf("enter the ele");
	 	scanf("%d",&ele);
	 	
	 	newnode=(struct node*)malloc(sizeof(struct node));
	 	newnode->data=ele;
	 	newnode->next=NULL;
	 	
	 	  if(head==NULL)
	 	  {
	 	  head=newnode;
		   p=newnode;
	     }
	else
	{
		for(p=head;p!=NULL;p=p->next)
		p->next=newnode;
		p=newnode;
}
}
}
void display()
	{
		if(head==NULL)
		printf("SLL is empty");
		else
		for(p=head;p!=NULL;p=p->next);
		printf("%d",p->data);
	}
	
	
	int main()
	{
		int cho;
		do
		{
			printf("***MainMenu***");
			printf("\n1.create");
			printf("\n2.display");
			printf("enter your cho");
			scanf("%d",&cho);
			
			   switch(cho)
			   {
			   	case 1:create();break;
			   	case 2:display();break;
			   	case 3:exit(0);
			   	 default:printf("enter your cho");
			   }
		}
		
		   while(cho>=0 && cho<=3);
     }

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
	int data;
	struct node*next;
	}*head=NULL,*p,*t,*newnode;



void create(){
	int n,i,ele;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
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
			for(p=head;p->next!=NULL;p=p->next);
			p->next=newnode;
			p=newnode;
		}
	}
}



void display(){
	if(head==NULL)
	   printf("Single Linked List id empty");
	else
	  for(p=head;p!=NULL;p=p->next)
	      printf("%d->",p->data);
}

void insert_at_begin(){
	int ele;
	printf("Enter the element:");
		scanf("%d",&ele);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;
		for(p=head;p->next!=NULL;p=p->next);
		    head=newnode;
		    newnode->next=p;
		    p=newnode;
}


int main(){
	int cho;
	do{
		printf("**MAIN MENU**");
		printf("\n1.CREATE\n2.DISPLAY\n3.INSERT\n4.EXIT");
		printf("Enter the choice:");
		scanf("%d",&cho);
	switch(cho){
	    case 1:create();break;
	    case 2:display();break;
	    case 3:insert();break;
	    case 4:exit(0);
	    default:printf("Enter a number between 1 and 3");
	}
}
while(cho>=1 && cho<=4);
}

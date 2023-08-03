#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next,*prev;
}
*head=NULL,*p,*t,*newnode;

void create()
{
	int i,n,ele;
	printf("enter the list count:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the element:");
		scanf("%d",&ele);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data =ele;
		newnode->next=NULL;
		newnode->prev=NULL;
		if(head==NULL)
		{
			head=newnode;
			p=newnode;
		}
		else
		{
			for(p=head;p->next!=NULL;p=p->next);
			p->next=newnode;
			newnode->prev=p;
			p=newnode;
		}
	}
}

void display()
{
	if(head==NULL)
	{
		printf("linked list is empty");
	}
	else
	{
		for(p=head;p!=NULL;p=p->next)
		printf("%d<=>",p->data);
	}
}

void display_rev()
{
	for(p=head;p->next!=NULL;p=p->next);
	for( ;p!=NULL;p=p->prev)
	{
		printf("%d<=>",p->data);
		
	}
}

int main()
{
	int choice;
	do{
		printf("\nMAIN MENU\n");
		printf("1.create\n");
    	printf("2.display\n");
    	printf("3.exit(0)\n");
    	printf("4.display_rev\n");
    	printf("enter the choice:");
    	scanf("%d",&choice);
    	switch(choice)
    	{
    		case 1:create();
        	break;
        	case 2:display();
        	break;
        	case 3:exit(0);
        	break;
        	case 4:display_rev();
        	break;
    }
}
while(choice>=1 && choice<=4);
}

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *prev;
	struct node *next;
}*head;

struct node *newnode,*temp;

void display()
{
	printf("\n");
	temp=head;
	do
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp!=head);
}

int main()
{
	int n,choice;
	printf("\nEnter no of elements:");
	scanf("%d",&n);
	head=NULL;
	for(int i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter data:");
		scanf("%d",&newnode->data);
		if(head==NULL)
		{
			head=newnode;
			head->prev=newnode;
			head->next=newnode;
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			newnode->next=head;
			temp=newnode;		
		}
	}
	display();
}

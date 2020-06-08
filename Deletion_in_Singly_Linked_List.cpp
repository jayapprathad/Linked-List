#include<stdio.h>
#include<stdlib.h>
typedef struct lnode
{
	int data;
	struct lnode *link;
}node;
void display(node *head); //Function to display the list
int main()
{
	int num,i,flag=0;
	node *head,*cur,*prev; // head= head(first) node, cur= current node, prev= previous node
	printf("Enter number of inputs: ");
	scanf("%d",&num);
	head=NULL;
	for(i=1;i<=num;i++)
	{
		cur=(node *)malloc(sizeof(node));
		printf("\nEnter value %d: ",i);
		scanf("%d",&cur->data);
		cur->link=NULL;
		if(head==NULL) // Inserting in an empty list
		head=cur; 
		else // Inserting after first node
		prev->link=cur;
		prev=cur;
	}
	printf("\nEnter Value to be Deleted: ");
	scanf("%d",&num);
	cur=head;
	while(cur!=NULL)
	{
		if(cur->data == num)
		{
			if(cur == head) // Deleting head(first) node
		    	head=head->link;
		   	else // Deleting some other node
            	prev->link=cur->link;
           	flag=1;
           	break;
		}
		prev=cur;
		cur=cur->link;
	}
	if(flag==0) // If value not exist
	    printf("\nValue not found");
    display(head);
}
void display(node *head)
{
	node *temp;
	temp=head;
	printf("\nList: ");
	while(temp!= NULL)
	{
    	printf("%d->",temp->data);
    	temp=temp->link;
    	if(temp==NULL)
    	    printf("NULL");
    }
}

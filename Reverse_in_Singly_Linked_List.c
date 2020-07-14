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
	int num,i;
	node *head,*cur,*prev,*next; // head= head(first) node, cur= current node, prev= previous node, next= next of current node
	printf("Enter number of inputs ");
	scanf("%d",&num);
	head=NULL;
	for(i=1;i<=num;i++)
	{
		cur=(node *)malloc(sizeof(node));
		printf("\nEnter value %d ",i);
		scanf("%d",&cur->data);
		cur->link=NULL;
		if(head==NULL) // Inserting in an empty list
	    	head=cur; 
		else // Inserting after first node
	    	prev->link=cur;
		prev=cur;
	}
	if(head==NULL) //Empty List
       printf("List empty\n");
    prev=NULL;
    cur=head;
    next=cur->link;
    while(cur != NULL) // Reversing list by changing the link pointing to previous node
    {
        cur->link=prev;
        prev= cur;
        cur=next;
        if(next!=NULL)
            next=next->link;
    }
    head=prev;
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

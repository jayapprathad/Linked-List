#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int data;
	struct list *link;
}node;
void display(node *head); //Function to display the list
int main()
{
	int num,i;
	node *head,*cur,*prev; // head= head(first) node, cur= current node, prev= previous node
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
    if(head==NULL)
        printf("Empty List\n");
    prev=head;    
    cur=head->link;
    while(cur!=NULL) //Deleting duplicates by changing the link of previous node
    {
        if(cur->data == prev->data)
            prev->link=cur->link;
        else
            prev=cur;
        cur=cur->link;
    }
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

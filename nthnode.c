#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL,*current,*new_node;	
void search(struct node *start,int n)
{
	int count=0;
 	struct node *main,*ref;
	main=start; 
	ref=start;
	while(count!=n)
	{
		ref=ref->next;
		count++;
	}
	while(ref!=NULL)
	{
		main=main->next;
		ref=ref->next;
	}
	printf("\ndata of the %d from the last is %d",n,main->data);

}	
void main()
{
	int n,ch;
	do
	{
	new_node=(struct node*)malloc(sizeof(struct node)); 
	printf("\n enter new data");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
		current=new_node;
	}
	else
	{
		current->next=new_node;
		current=new_node;
	}
	printf("\n do u want to insert another one 1.yes 2.no");
	scanf("%d",&ch);
	}
	while(ch!=2);
	printf("\n enter the position to search from the last");
	scanf("%d",&n);
	search(start,n);
	getch();
}
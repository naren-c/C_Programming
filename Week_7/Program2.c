#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();

struct node
{
	int data;
	int priority;
	struct node* next;
};
struct node *front = NULL;

int main()
{
	int choice;
	while(1)
	{
		printf("Enter your choice\n1.Insert 2.Delete 3.Display 4.Exit \nYour choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: enqueue();
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			default: printf("Invalid input given");
		}
	}
	return 0;
}
struct node* newnode()
{
	struct node *temp = NULL;
	temp = (struct node *)malloc(sizeof(struct node));
	printf("Enter the data and priority  ");
	scanf("%d %d",&temp->data,&temp->priority);
	temp->next = NULL;
	return temp;
}
void enqueue()
{
	struct node *temp =NULL,*temp1=NULL;
	temp = newnode();
	if(front == NULL)
	{
		front = temp;
	}
	else
	{
		if(temp->priority <= front->priority)
		{
			temp->next = front;
			front = temp;
		}
		else 
		{
			temp1 = front;
			while(temp1 != NULL)
			{
				if(temp->priority > temp1->priority && temp1->next != NULL)
				{
					temp1 = temp1->next;
				}
				else if(temp1->next == NULL)
				{
					temp1->next = temp;
					temp1 = temp->next;
				}
			}
		}
	}
}
void dequeue()
{
	struct node* temp = NULL;
	if(front == NULL)
		printf("Empty queue\n");
	else
	{
		temp = front;
		printf("%d data with priority %d has been deleted\n",front->data,front->priority);
		front = front->next;
		free(temp);
	}
}
void display()
{
	struct node* temp = front;
	if(front == NULL)
		printf("Empty queue.\n");
	else
	{
		while(temp != NULL)
		{
			printf("Priority and data is %d %d\n",temp->priority,temp->data);
			temp = temp->next;	
		}
	}
}
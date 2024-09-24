#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Node 
{
    int data;
    struct Node* next;
}*head = NULL,*tail = NULL,*newnode = NULL;

/***Function declarations***/
void displayLinkedList();
void insertatbeginning();
void insertatending();
void insertatposition();

/*** Create a linked list ***/
struct Node* createLinkedList(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        // Allocate memory for a new node
        newnode = (struct Node*)malloc(sizeof(struct Node));

        // Take input from the user
        printf("Enter data for node %d: ", i);
        scanf("%d", &newnode->data);
        newnode->next = NULL; // Set the next pointer of the new node to NULL
        
        // If this is the first node, set it as the head
        if (head == NULL) 
        {
            head = newnode;
            tail = newnode;
        } 
        else 
        {
            // Link it to the previous node
            tail->next = newnode;
            tail = newnode;
        }
    }
    // Make the list circular
    tail->next = head; // Set the last node's next to the head
    
    return head;
}

int main() 
{
	int nodes,option;
	char str[3] ;
	
	printf("\t\tCircular Linked List\n");	
	//Input the number of nodes
	printf("\nEnter the number of nodes: ");
	scanf("%d", &nodes);
	printf("\n");
	//Create the linked list
	head = createLinkedList(nodes);
	//Display the linked list
	printf("\nThe linked list is: ");
    displayLinkedList();
    
   	while(1)
    	{
        	printf("\nDo you want to insert a node (yes/no): ");
        	scanf("%s", str);
            	if(strcmp(str, "yes") == 0)
            	{
                	printf("\n1. Insert at beginning \n2. Insert at ending\n3. Insert at the specified position\n4. Exit\n");
                	scanf("%d", &option);
                	switch (option)
                	{
                    		case 1:
                    		insertatbeginning ();
                    		break;
                    		case 2:
                    	    insertatending();
                    		break;
                    		case 3:
                    		insertatposition();
                    		break;
                    		case 4:
                    		exit(0); // Exit the program
                    		default:
                    		printf("\nInvalid option please try again....!!!\n");
               	 	}
            	}
            	else
            	{
                	exit(0); // Exit the program
            	}	
    	}
    	return 0;
}

/*** Traverse and display the linked list ***/
void displayLinkedList() {
    struct Node* temp = head;
    
    // Traverse and display the linked list
    do 
    {   
        printf("%d -> ",temp->data);
        temp = temp->next;
    } while (temp != head);
    
    printf("%d(Head)",temp->data); // To indicate the circular nature of the list
    printf("\n");
}

void insertatbeginning()
{
    int newdata;

	printf("\n\tInserting a node at the beginning of the list\n");
	printf("\nEnter data for new node: ");
	scanf("%d",&newdata);

	newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = newdata;
	newnode->next = head;
	tail->next = newnode;
	head = newnode;
	printf("\nThe updated linked list is: ");
	displayLinkedList();
}

void insertatending()
{
    int newdata;

	printf("\n\tInserting a node at the end of the list\n");
	printf("\nEnter data for new node: ");
	scanf("%d",&newdata);

	newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = newdata;
	tail->next = newnode;
	newnode->next = head;
	tail = newnode;
	printf("\nThe updated linked list is: ");
	displayLinkedList();
}

void insertatposition()
{
	int position,newdata,i;
	struct Node *temp=NULL;
	
	printf("\n\tInserting a node at specified position in the list\n");
	printf("\nEnter a position to insert a new node: ");
	scanf("%d",&position);
	printf("Enter data for new node: ");
	scanf("%d",&newdata);

	newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = newdata;
	if (position == 1) 
	{
		newnode->next = head;
		head = newnode;
	}
	else
	{
		temp = head;
		for(i=1;i<position-1 ;i++)
		{
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
	printf("\nThe updated linked list is: ");
	displayLinkedList(head);
}

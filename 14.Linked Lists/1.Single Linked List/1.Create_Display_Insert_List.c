#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Define the structure for a node in the linked list
struct Node 
{
    int data;
    struct Node* next;
};

/***Funtion declarations***/
void insertatbeginning ();
void insertatending();
void insertatposition();

struct Node* head = NULL;

/***Create a linked list***/
struct Node* createLinkedList(int n) 
{
	struct Node* tail = NULL;
	struct Node* newnode = NULL;
	for(int i = 1; i <= n; i++)
	{
        	//Allocate memory for a new node
        	newnode = (struct Node*)malloc(sizeof(struct Node));
        	//Take input from the user
		printf("Enter data for node %d: ", i );
	    	scanf("%d", &newnode->data);
        	newnode->next = NULL; // Set the next pointer of the new node to NULL
		//If this is the first node, set it as the head
		if (head == NULL) 
		{
            		head = newnode;
        	} 
		else 
		{
			//Link it to the previous node
			tail->next = newnode;
        	}
        	//Move tail to the current node
        	tail = newnode;
    	}// loop end
    	return head;
}//Function end

/***Traverse and display the linked list***/
void displayLinkedList()
{
	struct Node* temp = head;
	// Traverse and display the linked list
	while (temp != NULL) 
	{
	    printf("%d -> ", temp->data);
	    temp = temp->next;
	}
	printf("NULL\n");
}

int main() 
{
	int nodes,option;
	char str[3] ;
			
	//Input the number of nodes
	printf("Enter the number of nodes: ");
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

/***Insert a node at the beginning of the list***/
void insertatbeginning ()
{
    int newdata;
    struct Node *newnode;
    
    printf("\n\tInserting a node at the beginning  of the list\n");
    printf("Enter data for new node: ");
    scanf("%d",&newdata);
    
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = newdata;
    newnode->next = head;
    head = newnode;
    printf("\nThe updated linked list is: ");
    displayLinkedList();
}

/***Insert a node at the end of the list***/
void insertatending()
{
    int newdata;
    struct Node *ptr,*newnode,*qtr=NULL;
    
    printf("\n\tInserting a node at the end of the list\n");
    printf("Enter data for new node: ");
    scanf("%d",&newdata);
    
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = newdata;
    newnode->next = NULL;
    ptr = head; 
 
    while(ptr!=NULL)
    {
        qtr = ptr;
        ptr = ptr->next;
    }
    qtr->next = newnode;
    
    printf("\nThe updated linked list is: ");
    displayLinkedList(head);
}

/***Insert a node at a specified position in the list***/
void insertatposition()
{
	int position,newdata,i;
	struct Node *temp=NULL,*newnode;
	
	printf("\n\tInserting a node at specified position in the list\n");
	printf("Enter a position to insert a new node: ");
	scanf("%d",&position);
	printf("Enter data for new node: ");
    	scanf("%d",&newdata);
    
	newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = newdata;
	if(position ==1)
	{
		newnode -> next = head;
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

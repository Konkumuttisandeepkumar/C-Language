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
void insertanode ();
void deleteanode();
void countLinkedList();

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
        	printf("\nDo you want to insert/delete a node (yes/no): ");
        	scanf("%s", str);
            	if(strcmp(str, "yes") == 0)
            	{
                	printf("\n1. Insert a node \n2. Delete a node\n3. Exit\n");
                	scanf("%d", &option);
                	switch (option)
                	{
                    		case 1:
                    		insertanode ();
                    		break;
                    		case 2:
                    		deleteanode();
                    		break;
                    		case 3:
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

/***Insert a node into the list***/
void insertanode ()
{
    int newdata;
	struct Node *newnode;

	printf("\n\tInserting a node into the list\n");
	printf("Enter data for new node: ");
	scanf("%d",&newdata);

	newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = newdata;
	newnode->next = head;
	head = newnode;
	printf("\nThe updated linked list is: ");
	displayLinkedList();
	countLinkedList();
}

/***Delete a node from the list***/
void deleteanode ()
{
    struct Node *temp;
    
    printf("\n\tDeleting a node from the list\n");
    
    temp = head;
    head = head->next;
    free(temp); // Free the memory of the deleted node
    temp = NULL;
    printf("\nThe updated linked list is: ");
    displayLinkedList();
    countLinkedList();
}

/***Count total nodes in the linked list***/
void countLinkedList()
{
    int nodecount = 0;
	struct Node* temp = head;
	while (temp != NULL) 
	{
	    nodecount++;
	    temp = temp->next;
	}
	printf("Number of nodes in the linked list: %d\n",nodecount);
}

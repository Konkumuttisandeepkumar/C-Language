#include <stdio.h>
#include <stdlib.h>

//Define the structure for a node in the linked list
struct Node 
{
    int data;
    struct Node* next;
};

/***Funtion declarations***/
struct Node* reverselinkedlist();

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
			
	//Input the number of nodes
	printf("Enter the number of nodes: ");
	scanf("%d", &nodes);
	printf("\n");
	
	//Create the linked list
	head = createLinkedList(nodes);
	
	//Display the linked list
	printf("\nThe linked list is: ");
    displayLinkedList();
    
    // Reverse the linked list
    head = reverselinkedlist();  // Update the head with the reversed list
    
    // Display the reversed linked list
    printf("\nThe reversed linked list is: ");
    displayLinkedList();
    printf("\n");
    
    return 0;
}

/*** Reverse the linked list ***/
struct Node* reverselinkedlist() 
{
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while (current != NULL) 
    {
        next = current->next;  // Store the next node
        current->next = prev;  // Reverse the current node's pointer
        prev = current;        // Move the prev and current pointers one step forward
        current = next;
    }
    return prev;  // New head of the reversed list
}

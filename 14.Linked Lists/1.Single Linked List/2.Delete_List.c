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
void deleteatbeginning ();
void deleteatending();
void deleteatposition();

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
        	printf("\nDo you want to delete a node (yes/no): ");
        	scanf("%s", str);
            	if(strcmp(str, "yes") == 0)
            	{
                	printf("\n1. Delete at beginning \n2. Delete at ending\n3. Delete at the specified position\n4. Exit\n");
                	scanf("%d", &option);
                	switch (option)
                	{
                    		case 1:
                    		deleteatbeginning ();
                    		break;
                    		case 2:
                    		deleteatending();
                    		break;
                    		case 3:
                    		deleteatposition();
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

/***Delete a node at the beginning of the list***/
void deleteatbeginning ()
{
    struct Node *temp;
    
    printf("\n\tDeleting a node at the beginning  of the list\n");
    
    temp = head;
    head = head->next;
    free(temp); // Free the memory of the deleted node
    temp = NULL;
    printf("\nThe updated linked list is: ");
    displayLinkedList();
}

/***Delete a node at the end of the list***/
void deleteatending()
{
    struct Node *temp1,*temp2=NULL;
    
    printf("\n\tDeleting a node at the end of the list\n");

    temp1 = head; 
 
    while(temp1->next != NULL)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = NULL; //Update the second last node to point to NULL
    free(temp1);    //Free the last node
    
    printf("\nThe updated linked list is: ");
    displayLinkedList(head);
}

/***Delete a node at a specified position in the list***/
void deleteatposition()
{
	int position,i;
	struct Node *temp=NULL,*toDelete=NULL;
	
	printf("\n\tDeleting a node at the specified position in the list\n");
	printf("Enter a position to delete the node: ");
	scanf("%d",&position);
	
	if(position ==1)
	{
        deleteatbeginning();    // Reuse the logic of deleting the first node
	}
	else
	{
		temp = head;
		for(i=1;i<position-1 ;i++)
		{
	    		temp = temp->next;
		}
        toDelete = temp->next;
        temp->next = toDelete->next; // Bypass the node to delete
        free(toDelete); // Free memory
        toDelete = NULL;
        
	    printf("\nThe updated linked list is: ");
    	displayLinkedList(head);
	}
}

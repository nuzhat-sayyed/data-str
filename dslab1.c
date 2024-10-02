/*#include<stdio.h>
#include<conio.h>
int main()
{
    int k,h;
    // int  a[k][h],b[k][h],c[k][h];
    printf("enter a value you want enter in matrices :");
    scanf("%d %d",&k,&h);
     int  a[k][h],b[k][h],c[k][h];
    printf("enter elements of first matrix :\n");
    for(int i=0;i<2;i++)
    
    {
        for(  int j=0;j<2;j++) 
        {             
            scanf("%d",&a[i][j]);

        }    
    }
    printf("enter elements of second matrix :\n");
    for(int i=0;i<2;i++)
     {
        for(int j=0;j<2;j++) 
         {
            scanf("%d",&b[i][j]);
            
           }
     }
    printf("multiplication of two matrices :\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
            printf("%d ",c[i][j]);
        }

        printf("\n");
    } 
}
*/


/*#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);

        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5];
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    printArray(arr, 5);

    quicksort(arr, 0, 4);

    printf("Sorted array: ");
    printArray(arr, 5);

    return 0;
}
*/


/*#include <stdio.h>
#include<stdlib.h>
// Structure to represent a node in the linked listsss
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create a linked list
Node* createLinkedList() {
    Node* head = NULL;
    int data;
    printf("Enter data (-1 to stop): ");
    scanf("%d", &data);
    while (data != -1) {
        Node* newNode = createNode(data);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        printf("Enter data (-1 to stop): ");
        scanf("%d", &data);
    }
    return head;
}

// Function to display the linked list
void displayLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = createLinkedList();
    printf("Linked List: ");
    displayLinkedList(head);
    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int info;
    struct node *next;  

}NODE;
void createlist (NODE *head)
{
    int n, count;
    NODE *last, *newnode;
    printf("how many  nodes :");
    scanf("%d", &n);
    last = head;
    for(count = 1;count<= n; count++)
    {
        newnode = (NODE *)malloc(sizeof(NODE));
    newnode->next = NULL;
    printf("\n enter the node data: ");
        scanf("%d",  &newnode->info);
    
        
        last->next =newnode;
        last=newnode;
    }
}

void display(NODE *head)
{
    NODE *temp;
    for(temp=head->next;temp!=NULL; temp=temp->next)
    {
        printf("%d->",temp->info);
    }
}
int search(NODE *head,int num)
{
    NODE *temp;
    int pos;
    for(temp=head->next; pos=1;temp!=NULL; temp=temp->next,pos++)
    {
        if(temp->info==num)
        {
            return pos;
            return -1;
        }
   void insert(NODE *head,int num,  int pos)
   {
    NODE *newnode,*temp;
    int i;
    for(temp=head, i=1; (temp!=NULL)&&(i<=pos-1);i++)
    temp =temp->next;
    if(temp=NULL)
    {
        printf("\nPosition is not valid");
        return;
    }
    newnode=(NODE*)malloc(sizeof(NODE));
    newnode->info=num;
    newnode->next=temp->next;
    temp->next=newnode;

   }
   void deletepos(NODE *head,int pos)
   {
    NODE *temp,*Temp1;
    int i;
    for(temp=head,i=1;(temp->next!=NULL)&&(i<pos-1);i++)
    temp=temp->next;
    if(temp->next==NULL)
    {
        printf("\nPosition is not valid");
        return;

    }
    temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
   }
   void deletevalue(NODE *head, int num)
   {
    NODE *temp, *temp1;
    for(temp=head;temp!=NULL;temp=temp->next)
    if(temp->next->info==num)
    {
        temp1=temp->next;
        temp->next=temp1->next;
        free(temp1);
        return;
    }
    printf("elements not found");
   }
   void sort(NODE *head)
   {
    NODE *temp, *temp1;
    int num;
    for(temp=head->next; temp-> next!=NULL;temp=temp->next)
  if(temp->info>temp1->info)
  {
    num=temp->info;
    temp->info=temp1->info;
    temp1->info=num;
  }
  void main()
  {
    NODE * head;
    int choice,n,pops;
    head=(NODE*)malloc(sizeof(NODE));
    head->next=NULL;
    do 
    {
        printf("\n1 :create");
        printf("\n2 :display");
        printf("\n3 :search");
        printf("\n4 insert");
        printf("\n5 delete by position");
        printf("\n6 delete by value");
        printf("\n7 sort");
        printf("\n8 exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            createdlist(head);
            break;
            case 2:
            printf("\n enter the element and position :");
            scanf("%d%d",&n,&pos);
            insert(head,n,pos);
            display(head);
            break;
            case 3:
            printf("\n enter the element to search :");
            scanf("%d",&n);
            deletevalue(head,n);
            display(head);
            break;
            case 4:
            printf("\n enter the element and position :");
            scanf("%d",&pos);
            deletepos(head,pos);
            display(head);
            break;
            case 5: 
            printf("\n enter the position to delete :");
            scanf("%d",&pos);
            deletepos(head,pos);
            display(head);
            break;
            case 6:
            printf("\n enter the element to delete :");
            scanf("%d",&n);
            deletevalue(head,n);
            display(head);
            break;
            case 7: 
            sort(head);
            display(head);
            break;
            case 8:
            exit(0);
        }
    }
  }
   
    return 0;
*/



#include <stdio.h>
#include <stdlib.h>

// Linked List Node
struct node {
	int info;
	struct node *prev, *next;
};
struct node* start = NULL;

// Function to traverse the linked list
void traverse()
{
	// List is empty
	if (start == NULL) {
		printf("\nList is empty\n");
		return;
	}
	// Else print the Data
	struct node* temp;
	temp = start;
	while (temp != NULL) {
		printf("Data = %d\n", temp->info);
		temp = temp->next;
	}
}

// Function to insert at the front
// of the linked list
void insertAtFront()
{
	int data;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	temp->info = data;
	temp->prev = NULL;

	// Pointer of temp will be
	// assigned to start
	temp->next = start;
	start = temp;
}

// Function to insert at the end of
// the linked list
void insertAtEnd()
{
	int data;
	struct node *temp, *trav;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->next = NULL;
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	temp->info = data;
	temp->next = NULL;
	trav = start;

	// If start is NULL
	if (start == NULL) {

		start = temp;
	}

	// Changes Links
	else {
		while (trav->next != NULL)
			trav = trav->next;
		temp->prev = trav;
		trav->next = temp;
	}
}

// Function to insert at any specified
// position in the linked list
void insertAtPosition()
{
	int data, pos, i = 1;
	struct node *temp, *newnode;
	newnode = malloc(sizeof(struct node));
	newnode->next = NULL;
	newnode->prev = NULL;

	// Enter the position and data
	printf("\nEnter position : ");
	scanf("%d", &pos);
	

	// If start==NULL,
	if (start == NULL) {
		start = newnode;
		newnode->prev = NULL;
		newnode->next = NULL;
	}

	// If position==1,
	else if (pos == 1) {
	// this is author method its correct but we can simply call insertAtfront() function for this special case
	/* newnode->next = start;
		newnode->next->prev = newnode;
		newnode->prev = NULL;
		start = newnode; */
	// now this is improved by Jay Ghughriwala on geeksforgeeks
	insertAtFront();
	}

	// Change links
	else {
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	newnode->info = data;
	temp = start;
		while (i < pos - 1) {
			temp = temp->next;
			i++;
		}
		newnode->next = temp->next;
		newnode->prev = temp;
		temp->next = newnode;
		temp->next->prev = newnode;
	}
}

// Function to delete from the front
// of the linked list
void deleteFirst()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		temp = start;
		start = start->next;
		if (start != NULL)
			start->prev = NULL;
		free(temp);
	}
}

// Function to delete from the end
// of the linked list
void deleteEnd()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	temp = start;
	while (temp->next != NULL)
		temp = temp->next;
	if (start->next == NULL)
		start = NULL;
	else {
		temp->prev->next = NULL;
		free(temp);
	}
}

// Function to delete from any specified
// position from the linked list
void deletePosition()
{
	int pos, i = 1;
	struct node *temp, *position;
	temp = start;

	// If DLL is empty
	if (start == NULL)
		printf("\nList is empty\n");

	// Otherwise
	else {
		// Position to be deleted
		printf("\nEnter position : ");
		scanf("%d", &pos);

		// If the position is the first node
		if (pos == 1) {
			deleteFirst(); // im,proved by Jay Ghughriwala on GeeksforGeeks
			if (start != NULL) {
				start->prev = NULL;
			}
			free(position);
			return;
		}

		// Traverse till position
		while (i < pos - 1) {
			temp = temp->next;
			i++;
		}
		// Change Links
		position = temp->next;
		if (position->next != NULL)
			position->next->prev = temp;
		temp->next = position->next;

		// Free memory
		free(position);
	}
}

// Driver Code
int main()
{
	int choice;
	while (1) {

		printf("\n\t1 To see list\n");
		printf("\t2 For insertion at"
			" starting\n");
		printf("\t3 For insertion at"
			" end\n");
		printf("\t4 For insertion at "
			"any position\n");
		printf("\t5 For deletion of "
			"first element\n");
		printf("\t6 For deletion of "
			"last element\n");
		printf("\t7 For deletion of "
			"element at any position\n");
		printf("\t8 To exit\n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			traverse();
			break;
		case 2:
			insertAtFront();
			break;
		case 3:
			insertAtEnd();
			break;
		case 4:
			insertAtPosition();
			break;
		case 5:
			deleteFirst();
			break;
		case 6:
			deleteEnd();
			break;
		case 7:
			deletePosition();
			break;

		case 8:
			exit(1);
			break;
		default:
			printf("Incorrect Choice. Try Again \n");
			continue;
		}
	}
	return 0;
}


                                                                                                    .
                                                                                                            
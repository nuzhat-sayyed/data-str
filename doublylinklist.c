#include<stdio.h>
#include<conio.h>

#include <stdlib.h>

// Structure to represent a node in the doubly linked list
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to create a doubly linked list
Node* create() {
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
            newNode->prev = temp;
        }
        printf("Enter data (-1 to stop): ");
        scanf("%d", &data);
    }
    return head;
}

// Function to display the doubly linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to insert a new node at the beginning of the doubly linked list
void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

// Function to insert a new node at the end of the doubly linked list
void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

// Function to delete a node from the doubly linked list
void deleteNode(Node** head, int data) {
    Node* temp = *head;
    while (temp != NULL) {
        if (temp->data == data) {
            if (temp->prev != NULL) {
                temp->prev->next = temp->next;
            } else {
                *head = temp->next;
            }
            if (temp->next != NULL) {
                temp->next->prev = temp->prev;
            }
            free(temp);
            return;
        }
        temp = temp->next;
    }
    printf("Node not found\n");
}

int main() {
    Node* head = create();
    printf("Doubly Linked List: ");
    display(head);

    int data;
    printf("Enter data to insert at beginning: ");
    scanf("%d", &data);
    insertAtBeginning(&head, data);
    printf("Doubly Linked List after insertion at beginning: ");
    display(head);

    printf("Enter data to insert at end: ");
    scanf("%d", &data);
    insertAtEnd(&head, data);
    printf("Doubly Linked List after insertion at end: ");
    display(head);

    printf("Enter data to delete: ");
    scanf("%d", &data);
    deleteNode(&head, data);
    printf("Doubly Linked List after deletion: ");
    display(head);

    return 0;
}
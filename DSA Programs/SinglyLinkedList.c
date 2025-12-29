//13. Singly Linked List

#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert at a specific position
void insertAtPosition(struct Node** head, int data, int position) {
    struct Node* newNode = createNode(data);

    if (position == 1) { // Insert at beginning
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to delete a node at a specific position
void deleteAtPosition(struct Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = *head;

    if (position == 1) { // Delete first node
        *head = temp->next;
        free(temp);
        return;
    }

    struct Node* prev = NULL;
    for (int i = 1; i < position && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Driver code
int main() {
    struct Node* head = NULL;

    insertAtPosition(&head, 10, 1); // Insert 10 at position 1
    insertAtPosition(&head, 20, 2); // Insert 20 at position 2
    insertAtPosition(&head, 30, 2); // Insert 30 at position 2
    printList(head);                 // 10 -> 30 -> 20 -> NULL

    deleteAtPosition(&head, 2);     // Delete node at position 2
    printList(head);                 // 10 -> 20 -> NULL

    deleteAtPosition(&head, 1);     // Delete first node
    printList(head);                 // 20 -> NULL

    return 0;
}
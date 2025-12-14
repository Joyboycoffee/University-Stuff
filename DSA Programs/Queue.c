//11. Queue

#include <stdio.h>
#define MAX 5  // Maximum size of the queue

int queue[MAX];
int front = -1, rear = -1;

// Function to add element to the queue
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow!\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    queue[++rear] = value;
    printf("Enqueued: %d\n", value);
}

// Function to remove element from the queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow!\n");
        return;
    }
    int value = queue[front++];
    printf("Dequeued: %d\n", value);
    if (front > rear) {  // Reset queue if empty
        front = rear = -1;
    }
}

// Function to display queue elements
void display() {
    if (front == -1) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    enqueue(40);
    enqueue(50);
    enqueue(60);  // This will show overflow
    display();

    return 0;
}
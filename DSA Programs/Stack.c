//12. Stack

#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;  // Stack is empty

// Push operation
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    stack[++top] = value;
    printf("Pushed: %d\n", value);
}

// Pop operation
void pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return;
    }
    int value = stack[top--];
    printf("Popped: %d\n", value);
}

// Display stack elements
void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    display();

    pop();
    display();

    push(40);
    push(50);
    push(60);  // Overflow
    display();

    return 0;
}
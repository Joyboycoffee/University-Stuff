//7. Breadth First Search- (Using Adjacency Matrix + Queue)

#include <stdio.h>

#define MAX 10

int graph[MAX][MAX];
int visited[MAX];
int queue[MAX];
int front = -1, rear = -1;

// Function to insert into queue
void enqueue(int v) {
    if (rear == MAX - 1)
        return;
    if (front == -1)
        front = 0;
    queue[++rear] = v;
}

// Function to delete from queue
int dequeue() {
    int v = queue[front];
    if (front == rear)
        front = rear = -1;
    else
        front++;
    return v;
}

// BFS function
void BFS(int start, int n) {
    enqueue(start);
    visited[start] = 1;

    while (front != -1) {
        int v = dequeue();
        printf("%d ", v);

        // Visit all adjacent vertices
        for (int i = 0; i < n; i++) {
            if (graph[v][i] == 1 && visited[i] == 0) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int n, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    BFS(start, n);

    return 0;
}
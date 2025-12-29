//8. Depth First Search

#include <stdio.h>

#define MAX 10

int graph[MAX][MAX];
int visited[MAX];
int n;

// DFS function
void DFS(int v) {
    visited[v] = 1;
    printf("%d ", v);

    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    int start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("DFS Traversal starting from vertex %d:\n", start);
    DFS(start);

    return 0;
}

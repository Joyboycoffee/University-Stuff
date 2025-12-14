//5. Kruskal's Algorithm

#include <stdio.h>
#include <stdlib.h>

// Structure to represent an edge
struct Edge {
    int src, dest, weight;
};

// Structure to represent a graph
struct Graph {
    int V, E;
    struct Edge* edge;
};

// Find set of an element (Disjoint Set - Find)
int find(int parent[], int i) {
    if (parent[i] != i)
        parent[i] = find(parent, parent[i]); // Path compression
    return parent[i];
}

// Union of two sets
void Union(int parent[], int rank[], int x, int y) {
    int xroot = find(parent, x);
    int yroot = find(parent, y);

    // Union by rank
    if (rank[xroot] < rank[yroot])
        parent[xroot] = yroot;
    else if (rank[xroot] > rank[yroot])
        parent[yroot] = xroot;
    else {
        parent[yroot] = xroot;
        rank[xroot]++;
    }
}

// Compare function for qsort (sort edges by weight)
int compare(const void* a, const void* b) {
    struct Edge* e1 = (struct Edge*)a;
    struct Edge* e2 = (struct Edge*)b;
    return e1->weight - e2->weight;
}

// Kruskal's Algorithm
void KruskalMST(struct Graph* graph) {
    int V = graph->V;
    struct Edge result[V]; // Stores MST
    int e = 0; // Result edges count
    int i = 0;

    // Step 1: Sort edges by weight
    qsort(graph->edge, graph->E, sizeof(graph->edge[0]), compare);

    int parent[V], rank[V];

    // Initialize disjoint sets
    for (int v = 0; v < V; v++) {
        parent[v] = v;
        rank[v] = 0;
    }

    // Step 2: Pick smallest edges
    while (e < V - 1 && i < graph->E) {
        struct Edge next_edge = graph->edge[i++];

        int x = find(parent, next_edge.src);
        int y = find(parent, next_edge.dest);

        // If including this edge doesn't form a cycle
        if (x != y) {
            result[e++] = next_edge;
            Union(parent, rank, x, y);
        }
    }

    // Print MST
    printf("Edges in the Minimum Spanning Tree:\n");
    int minCost = 0;
    for (i = 0; i < e; i++) {
        printf("%d -- %d == %d\n",
               result[i].src, result[i].dest, result[i].weight);
        minCost += result[i].weight;
    }
    printf("Total cost of MST = %d\n", minCost);
}

int main() {
    int V = 4;  // Number of vertices
    int E = 5;  // Number of edges

    struct Graph graph;
    graph.V = V;
    graph.E = E;

    graph.edge = (struct Edge*)malloc(E * sizeof(struct Edge));

    // Graph edges
    graph.edge[0] = (struct Edge){0, 1, 10};
    graph.edge[1] = (struct Edge){0, 2, 6};
    graph.edge[2] = (struct Edge){0, 3, 5};
    graph.edge[3] = (struct Edge){1, 3, 15};
    graph.edge[4] = (struct Edge){2, 3, 4};

    KruskalMST(&graph);

    return 0;
}
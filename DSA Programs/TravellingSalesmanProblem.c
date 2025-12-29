//15. Travelling Salesman Problem - Dynamic Programming solution

#include <stdio.h>
#include <limits.h>

#define V 4  // Number of cities

// Function to find minimum of two numbers
int min(int a, int b) {
    return (a < b) ? a : b;
}

// Function to solve TSP using DP + Bitmasking
int tsp(int graph[V][V], int mask, int pos, int dp[V][1 << V]) {
    if (mask == (1 << V) - 1) {
        return graph[pos][0]; // Return to starting city
    }

    if (dp[pos][mask] != -1) {
        return dp[pos][mask];
    }

    int ans = INT_MAX;

    // Try to go to every unvisited city
    for (int city = 0; city < V; city++) {
        if ((mask & (1 << city)) == 0) { // If city is not visited
            int newAns = graph[pos][city] + tsp(graph, mask | (1 << city), city, dp);
            ans = min(ans, newAns);
        }
    }

    return dp[pos][mask] = ans;
}

int main() {
    int graph[V][V] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int dp[V][1 << V];
    // Initialize dp array with -1
    for (int i = 0; i < V; i++)
        for (int j = 0; j < (1 << V); j++)
            dp[i][j] = -1;

    int result = tsp(graph, 1, 0, dp); // Start from city 0
    printf("Minimum cost of TSP tour: %d\n", result);

    return 0;
}
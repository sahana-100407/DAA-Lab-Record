#include <stdio.h>

#define MAX 10

int graph[MAX][MAX];  
int visited[MAX];      
 vertices

int main() {
    int n, i, j;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    for(i = 0; i < n; i++)
        visited[i] = 0;

    printf("\nApproximate Vertex Cover:\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(graph[i][j] == 1 && visited[i] == 0 && visited[j] == 0) {
                visited[i] = 1;
                visited[j] = 1;

                printf("%d %d\n", i, j);
            }
        }
    }

    return 0;
}
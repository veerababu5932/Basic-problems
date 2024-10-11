#include <stdio.h>

int main() {
    int R, C, E;
    
    // Taking input
    scanf("%d %d %d", &R, &C, &E);
    
    // Calculate total number of cells
    int totalCells = (R + E) * C;
    
    // Output the result
    printf("%d\n", totalCells);
    
    return 0;
}

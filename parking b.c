#include <stdio.h>

int main() {
    int X, Y, H;
    
    // Taking input
    scanf("%d %d %d", &X, &Y, &H);
    
    // Total parking charges using a single formula
    int totalCharges = X + (H - 1) * (H > 1 ? Y : 0);
    
    // Output the result
    printf("%d\n", totalCharges);
    
    return 0;
}

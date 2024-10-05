#include <stdio.h>

int main() {
    int C;
    double F;
    
    // Input the Celsius value
    scanf("%d", &C);
    
    // Convert Celsius to Fahrenheit
    F = (C * 9.0 / 5.0) + 32;
    
    // Print the Fahrenheit value up to two decimal places
    printf("%.2f\n", F);
    
    return 0;
}

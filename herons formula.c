#include <stdio.h>
#include <math.h>  // For using sqrt() function

int main() {
    int a, b, c;
    double s, area;
    
    // Input the values of a, b, c
    scanf("%d %d %d", &a, &b, &c);
    
    // Calculate semi-perimeter s
    s = (a + b + c) / 2.0;
    
    // Calculate the area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    // Print the area with 4 decimal places
    if (isnan(area)) {  // If the area is not a valid number (e.g. invalid triangle)
        area = 0.0;
    }
    printf("%.4f\n", area);
    
    return 0;
}

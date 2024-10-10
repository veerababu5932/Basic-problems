#include <stdio.h>

int main() {
    int A, B, correct_sum, vijay_output, difference;
    
    // Input: Two space-separated integers A and B
    scanf("%d %d", &A, &B);
    
    // Step 1: Compute the correct sum
    correct_sum = A + B;
    
    // Step 2: Vijay's faulty output is obtained by appending '1' to the correct sum
    vijay_output = correct_sum * 10 + 1;
    
    // Step 3: Compute the difference between Vijay's output and the correct sum
    difference = vijay_output - correct_sum;
    
    // Output the difference
    printf("%d\n", difference);
    
    return 0;
}

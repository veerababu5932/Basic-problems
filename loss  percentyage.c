#include <stdio.h>

int main() {
    int cp, sp;
    double loss_percentage;

    // Input: Two space-separated integers representing CP and SP
    scanf("%d %d", &cp, &sp);

    // Calculate the loss percentage
    loss_percentage = ((double)(cp - sp) / cp) * 100;

    // Print the loss percentage formatted to 2 decimal places
    printf("%.2f\n", loss_percentage);

    return 0;
}

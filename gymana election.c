#include <stdio.h>

int main() {
    long long N, M;
    
    // Input: Read the number of nominees and voters                                      //in t u have use
    scanf("%lld %lld", &N, &M);
    
    // Calculate the minimum number of votes Om needs to secure a strict majority
    long long required_votes = (M / 2) + 1;
    
    // Output the result
    printf("%lld\n", required_votes);
    
    return 0;
}

#include <stdio.h>

//Counting valid values of x
long long sumXor(long long n) {
    int zeroCount = 0;

    while (n > 0) {
        // Check if the last digit in binary is 0
        if (n % 2 == 0) {
            zeroCount++;
        }

        // Moving to the next bit
        n = n / 2;
    }

    // Calculating 2 to the power of zeroCount
    long long result = 1;
    for (int i = 0; i < zeroCount; i++) {
        result = result * 2;
    }

    return result;
}

int main() {
    long long n;
    
    // Taking input 
    scanf("%lld", &n);
    
    // Calling the function 
    printf("%lld\n", sumXor(n));

    return 0;
}

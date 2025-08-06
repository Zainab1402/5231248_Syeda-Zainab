#include <stdio.h>

// Function to flip all bits of a 32-bit unsigned integer
unsigned int flippingBits(unsigned int n) {
    return ~n;
}

int main() {
    int q;
    scanf("%d", &q);  

    for (int i = 0; i < q; i++) {
        unsigned int n;
        // Reading each number
        scanf("%u", &n);  
         // Printing flipped result
        printf("%u\n", flippingBits(n)); 
    }

    return 0;
}

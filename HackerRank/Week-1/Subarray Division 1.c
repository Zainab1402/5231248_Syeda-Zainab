#include <stdio.h>

int birthday(int s[], int n, int d, int m) {
    int count = 0;

    // Loop through each possible starting point of a segment
    for (int i = 0; i <= n - m; i++) {
        int sum = 0;

        // Calculate sum of the segment of length m starting at i
        for (int j = 0; j < m; j++) {
            sum += s[i + j];
        }

        // If the sum matches Ron's birthday, increase count
        if (sum == d) {
            count++;
        }
    }

    return count;
}

// Number of squares
int main() {
    int n;
    scanf("%d", &n); 

    int s[n];
    for (int i = 0; i < n; i++) {
        // Reading each number on the chocolate squares
        scanf("%d", &s[i]); 
    }


// Ron's birth day and month
    int d, m;
    scanf("%d %d", &d, &m); 
    
// Printing the number of ways to divide the chocolate
    int result = birthday(s, n, d, m);
    printf("%d\n", result); 

    return 0;
}

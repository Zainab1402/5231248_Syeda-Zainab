#include <stdio.h>

// Function to calculate absolute difference between diagonals
int diagonalDifference(int arr[100][100], int n) {
    int primarySum = 0;
    int secondarySum = 0;

    for (int i = 0; i < n; i++) {
        primarySum += arr[i][i];               
        secondarySum += arr[i][n - i - 1];     
    }

    int diff = primarySum - secondarySum;
    if (diff < 0) {
        diff = -diff; 
    }

    return diff;
}

int main() {
    int n;
    int arr[100][100];  

    // Reading matrix size
    scanf("%d", &n);

    // Reading matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calling function
    int result = diagonalDifference(arr, n);
    printf("%d\n", result);

    return 0;
}

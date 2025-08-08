#include <stdio.h>

void plusMinus(int arr[], int n) {
    int positives = 0, negatives = 0, zeros = 0;

    // Count positives, negatives, and zeros
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positives++;
        } else if (arr[i] < 0) {
            negatives++;
        } else {
            zeros++;
        }
    }

    // Converting counts to ratios
    double positiveRatio = (double)positives / n;
    double negativeRatio = (double)negatives / n;
    double zeroRatio = (double)zeros / n;

    // Printing with 6 decimal places
    printf("%.6f\n", positiveRatio);
    printf("%.6f\n", negativeRatio);
    printf("%.6f\n", zeroRatio);
}

int main() {
    int n;
    int arr[100]; 

    // size of array
    scanf("%d", &n);

    // array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calling the function
    plusMinus(arr, n);

    return 0;
}

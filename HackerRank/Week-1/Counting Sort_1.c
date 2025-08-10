#include <stdio.h>

void countingSort(int arr[], int n) {
    int freq[100] = {0};  // Initialize all counts to 0

    // Counting the occurrences of each number
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 && arr[i] < 100) {
            freq[arr[i]]++;
        }
    }

    // Printing the frequency array
    for (int i = 0; i < 100; i++) {
        printf("%d ", freq[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);  

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    countingSort(arr, n);

    return 0;
}

#include <stdio.h>

int lonely_integer(int a[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= a[i];
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (sizeof(arr)/sizeof(arr[0]) != n) {
        printf("No of integers does not match the specified length.\n");
    } else {
        printf("%d\n", lonely_integer(arr, n));
    }

    return 0;
}

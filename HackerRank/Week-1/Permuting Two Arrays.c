#include <stdio.h>
#include <stdlib.h>

// Comparison for ascending sort
int cmpAsc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Comparison for descending sort
int cmpDesc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

void twoArrays(int k, int A[], int B[], int n) {
    // Sort A ascending, B descending
    qsort(A, n, sizeof(int), cmpAsc);
    qsort(B, n, sizeof(int), cmpDesc);

    // Checking the condition
    for (int i = 0; i < n; i++) {
        if (A[i] + B[i] < k) {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int A[n], B[n];

        for (int i = 0; i < n; i++) scanf("%d", &A[i]);
        for (int i = 0; i < n; i++) scanf("%d", &B[i]);

        twoArrays(k, A, B, n);
    }

    return 0;
}

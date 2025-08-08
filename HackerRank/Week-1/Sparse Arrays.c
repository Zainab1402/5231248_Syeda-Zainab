#include <stdio.h>
#include <string.h>

void SparseArr(char strings[][101], int n, char queries[][101], int q, int result[]) {
    for (int i = 0; i < q; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (strcmp(queries[i], strings[j]) == 0) {
                count++;
            }
        }
        result[i] = count;
    }
}

int main() {
    int n, q;
    char strings[1000][101];  
    char queries[1000][101];
    int result[1000];

    // Reading number of strings
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%100s", strings[i]); 
    }

    // Reading number of queries
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%100s", queries[i]);
    }

    // Processing queries
    SparseArr(strings, n, queries, q, result);

    // Output 
    for (int i = 0; i < q; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}

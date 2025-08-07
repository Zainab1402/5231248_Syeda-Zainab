#include <stdio.h>
#include <string.h>

// Function to sort a row in order
void sortRow(char row[]) {
    int i, j;
    char temp;
    int len = strlen(row);

    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (row[i] > row[j]) {
                temp = row[i];
                row[i] = row[j];
                row[j] = temp;
            }
        }
    }
}

int main() {
// number of test cases
    int t;
    scanf("%d", &t); 

    while (t--) {
// number of rows
        int n;
        scanf("%d", &n); 

        char grid[100][100];
        int i, j;

        // Read each row and sort it
        for (i = 0; i < n; i++) {
            scanf("%s", grid[i]);
            sortRow(grid[i]);
        }

        // Checking if columns are sorted
        int ok = 1; 

        for (j = 0; j < n; j++) {
            for (i = 0; i < n - 1; i++) {
                if (grid[i][j] > grid[i + 1][j]) {
                    ok = 0; 
                    break;
                }
            }
            if (ok == 0)
                break;
        }

        if (ok == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

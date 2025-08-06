#include <stdio.h>

void min_max_sum(int numbers[], int size) {
    long total = 0;
    int min_value = numbers[0];
    int max_value = numbers[0];

    for (int i = 0; i < size; i++) {
        total += numbers[i];
        if (numbers[i] < min_value) {
            min_value = numbers[i];
        }
        if (numbers[i] > max_value) {
            max_value = numbers[i];
        }
    }

    long min_total = total - max_value;
    long max_total = total - min_value;
    printf("%ld %ld\n", min_total, max_total);
}

int main() {
    int numbers[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    min_max_sum(numbers, 5);
    return 0;
}

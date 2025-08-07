#include <stdio.h>

int main() {
    char str[1000];
    // To track if each letter is present
    int letters[26] = {0};  
    int i, count = 0;

    // Reading input  
    fgets(str, sizeof(str), stdin);

    // Checking each character
    for (i = 0; str[i] != '\0'; i++) {
        char chr = str[i];

        // Checking for uppercase letters
        if (chr >= 'A' && chr <= 'Z') {
            letters[chr - 'A'] = 1;
        }

        // Checking for lowercase letters
        else if (chr >= 'a' && chr <= 'z') {
            letters[chr - 'a'] = 1;
        }
    }

    // Counting how many unique letters were found
    for (i = 0; i < 26; i++) {
        if (letters[i] == 1) {
            count++;
        }
    }

    // Checking pangram
    if (count == 26) {
        printf("pangram\n");
    } else {
        printf("not pangram\n");
    }

    return 0;
}

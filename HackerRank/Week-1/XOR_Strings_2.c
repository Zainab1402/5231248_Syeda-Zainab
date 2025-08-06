#include <stdio.h>
#include <string.h>

char* strings_xor(char *s, char *t) {
    static char res[100];
    int i;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == t[i]) {
            res[i] = '0';
        } else {
            res[i] = '1';
        }
    }
    res[i] = '\0';
    return res;
}

int main() {
    char s[100], t[100];
    scanf("%s", s);
    scanf("%s", t);
    printf("%s\n", strings_xor(s, t));
    return 0;
}

#include <stdio.h>

int main() {
    char str[101];
    int alpha[26];

    for (int i = 0; i < 26; i++) {
        alpha[i] = -1;
    }

    scanf_s("%s", str, 101);

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        if (alpha[index] == -1) {
            alpha[index] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", alpha[i]);
    }

    return 0;
}

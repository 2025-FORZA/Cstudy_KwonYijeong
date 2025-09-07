#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000001];
    int count = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\n') {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
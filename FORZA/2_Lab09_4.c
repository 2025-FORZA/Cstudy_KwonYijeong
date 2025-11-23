#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char num[11];
    scanf_s("%s", num, 11);

    int len = strlen(num);

    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (num[i] < num[j]) {
                char temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("%s", num);
    return 0;
}

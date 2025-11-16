#include <stdio.h>

int main(void) {
    int R, C, ZR, ZC;
    if (scanf_s("%d %d %d %d", &R, &C, &ZR, &ZC) != 4)
        return 0;

    char s[105];
    for (int i = 0; i < R; i++) {
        if (scanf_s("%104s", s, sizeof(s)) != 1)
            return 0;

        for (int a = 0; a < ZR; a++) {
            for (int j = 0; j < C; j++) {
                for (int b = 0; b < ZC; b++)
                    printf("%c", s[j]);
            }
            printf("\n");
        }
    }
    return 0;

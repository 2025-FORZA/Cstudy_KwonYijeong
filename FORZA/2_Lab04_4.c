#include <stdio.h>

int main(void) {
    int a, b;
    int i = 1, j = 0, p = 0, s = 0;
    scanf_s("%d %d", &a, &b);

    while (p < b) {
        p++;
        j++;
        if (p >= a) s += i;
        if (j == i) { i++; j = 0; }
    }

    printf("%d\n", s);
    return 0;
}

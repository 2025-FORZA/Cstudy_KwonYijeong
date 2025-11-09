#include <stdio.h>

int main(void) {
    int a[9];
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        scanf_s("%d", &a[i]);
        sum += a[i];
    }

    int i, j;
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 9; j++) {
            if (sum - a[i] - a[j] == 100) {
                a[i] = -1;
                a[j] = -1;
                break;
            }
        }
        if (a[i] == -1) break;
    }

    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 9; j++) {
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for (i = 0; i < 9; i++) {
        if (a[i] != -1)
            printf("%d\n", a[i]);
    }

    return 0;
}

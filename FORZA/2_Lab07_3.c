#include<stdio.h>

int main(void) {
    int apt[15][15] = { 0 };
    for (int n = 1; n <= 14; n++) apt[0][n] = n;
    for (int k = 1; k <= 14; k++) {
        for (int n = 1; n <= 14; n++) {
            apt[k][n] = apt[k][n - 1] + apt[k - 1][n];
        }
    }

    int T;
    if (scanf_s("%d", &T) != 1) return 0;
    while (T--) {
        int k, n;
        if (scanf_s("%d", &k) != 1) return 0;
        if (scanf_s("%d", &n) != 1) return 0;
        printf("%d\n", apt[k][n]);
    }
    return 0;
}

#include <stdio.h>

int main(void) {
    int n;
    if (scanf_s("%d", &n) != 1) return 0;

    int a[100000];
    for (int i = 0; i < n; i++) scanf_s("%d", &a[i]);

    int m = 0, c = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] > m) { m = a[i]; c++; }
    }

    printf("%d", c);
    return 0;
}
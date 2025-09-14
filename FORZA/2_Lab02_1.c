#include <stdio.h>

int main(void) {
    int x, n, a, b;
    long long total = 0;

    scanf_s("%d", &x);
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf_s("%d %d", &a, &b);
        total += (long long)a * b;
    }

    if (x == total)
        printf("Yes");
    else
        printf("No");

    return 0;
}

#include <stdio.h>

int is_prime(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int n;
    if (scanf_s("%d", &n) != 1) return 0;

    int a, c = 0;
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &a);
        if (is_prime(a)) c++;
    }

    printf("%d", c);
    return 0;
}
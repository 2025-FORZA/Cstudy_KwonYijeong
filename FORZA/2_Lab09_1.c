#include <stdio.h>

int main(void) {
    long long t;
    scanf_s("%lld", &t);

    while (t--) {
        long long n;
        scanf_s("%lld", &n);

        long long x = 1;
        for (long long i = 1; i <= n; i++) {
            x = x * i;
            x = x % 100000;
            while (x % 10 == 0) x /= 10;
        }

        printf("%lld\n", x % 10);
    }

    return 0;
}


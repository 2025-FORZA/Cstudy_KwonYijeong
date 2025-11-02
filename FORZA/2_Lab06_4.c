#include <stdio.h>

int main(void) {
    long long x, y, z; 
    if (scanf_s("%lld %lld %lld", &x, &y, &z) != 3) return 0;

    long long per = x - y;
    long long need = z - y;
    long long days = (need + per - 1) / per;

    printf("%lld\n", days);
    return 0;
}

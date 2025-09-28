#include <stdio.h>

int main(void) {
    char a[11], b[11];
    int i, m1 = 0, M1 = 0, m2 = 0, M2 = 0;
    scanf_s("%10s %10s", a, (unsigned)sizeof(a), b, (unsigned)sizeof(b));

    for (i = 0; a[i]; i++) {
        int d = a[i] - '0';
        int d_min = (d == 6) ? 5 : d;
        int d_max = (d == 5) ? 6 : d;
        m1 = m1 * 10 + d_min;
        M1 = M1 * 10 + d_max;
    }
    for (i = 0; b[i]; i++) {
        int d = b[i] - '0';
        int d_min = (d == 6) ? 5 : d;
        int d_max = (d == 5) ? 6 : d;
        m2 = m2 * 10 + d_min;
        M2 = M2 * 10 + d_max;
    }

    printf("%d %d\n", m1 + m2, M1 + M2);
    return 0;
}

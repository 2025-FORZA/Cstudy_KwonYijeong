
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, i, j;
    scanf("%d %d", &a, &b);
    int *k = (int*)malloc(sizeof(int) * b);
    for (i = 0; i < b; i++) scanf("%d", &k[i]);
    int *v = (int*)calloc(a + 1, sizeof(int));
    long long c = 0;
    for (i = 0; i < b; i++) {
        int d = k[i];
        if (d <= 0) continue;
        for (j = d; j <= a; j += d) if (!v[j]) { v[j] = 1; c += j; }
    }
    printf("%lld\n", c);
    free(v); free(k);
    return 0;
}

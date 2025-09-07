#include <stdio.h>

int main() {
    int n, m;
    int x[100];
    if (scanf("%d %d", &n, &m) != 2) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &x[i]);

    int best = 0;
    for (int a = 0; a < n - 2; a++) {
        for (int b = a + 1; b < n - 1; b++) {
            for (int c = b + 1; c < n; c++) {
                int s = x[a] + x[b] + x[c];
                if (s <= m && s > best) best = s;
            }
        }
    }

    printf("%d\n", best);
    return 0;
}
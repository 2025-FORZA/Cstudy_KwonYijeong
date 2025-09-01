
#include <stdio.h>
#include <stdlib.h>

int cmp(const void* x, const void* y) { return (*(int*)y - *(int*)x); }

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int v[105][105];
    for (int i = 0; i < a; i++) for (int j = 0; j < b; j++) scanf("%d", &v[i][j]);
    for (int i = 0; i < a; i++) qsort(v[i], b, sizeof(int), cmp);
    int sc[105] = {0};
    for (int j = 0; j < b; j++) {
        int m = v[0][j];
        for (int i = 1; i < a; i++) if (v[i][j] > m) m = v[i][j];
        for (int i = 0; i < a; i++) if (v[i][j] == m) sc[i]++;
    }
    int m = sc[0];
    for (int i = 1; i < a; i++) if (sc[i] > m) m = sc[i];
    int first = 1;
    for (int i = 0; i < a; i++) if (sc[i] == m) {
        if (!first) putchar(' ');
        printf("%d", i+1);
        first = 0;
    }
    putchar('\n');
    return 0;
}


#include <stdio.h>

int main() {
    int seen[42] = {0};
    int x, count = 0;
    for (int i = 0; i < 10; i++) {
        if (scanf("%d", &x) != 1) return 0;
        int r = x % 42;
        if (!seen[r]) { seen[r] = 1; count++; }
    }
    printf("%d\n", count);
    return 0;
}

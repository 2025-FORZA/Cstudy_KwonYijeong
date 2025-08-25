
#include <stdio.h>

int main() {
    int x, max = -1000000000, idx = 0;
    for (int i = 1; i <= 9; i++) {
        if (scanf("%d", &x) != 1) return 0;
        if (x > max) { max = x; idx = i; }
    }
    printf("%d\n%d\n", max, idx);
    return 0;
}


#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    int c = 1;
    for (b = 2; b <= a; b++) c *= b;
    printf("%d\n", c);
    return 0;
}

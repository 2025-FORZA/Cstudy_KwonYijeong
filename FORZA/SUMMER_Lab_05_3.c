
#include <stdio.h>
#include <string.h>

int main() {
    char a[64];
    while (scanf("%s", a) == 1) {
        if (a[0] == '0' && a[1] == '\0') break;
        printf("%s", a);
        while (strlen(a) > 1) {
            long long b = 1;
            for (int i = 0; a[i]; i++) b *= (a[i] - '0');
            printf(" %lld", b);
            sprintf(a, "%lld", b);
        }
        putchar('\n');
    }
    return 0;
}

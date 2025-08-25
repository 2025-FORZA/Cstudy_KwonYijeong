
#include <stdio.h>

int main() {
    char s[12];
    if (scanf("%s", s) != 1) return 0;
    int cnt[10] = {0};
    for (int i = 0; s[i] != '\0'; i++) cnt[s[i]-'0']++;
    for (int d = 9; d >= 0; d--) {
        while (cnt[d]--) putchar('0' + d);
    }
    putchar('\n');
    return 0;
}

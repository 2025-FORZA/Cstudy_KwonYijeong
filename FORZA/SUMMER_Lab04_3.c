
#include <stdio.h>

int main() {
    int T;
    if (scanf("%d", &T) != 1) return 0;
    for (int t = 0; t < T; t++) {
        char s[85];
        if (scanf("%s", s) != 1) return 0;
        int streak = 0, sum = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == 'O') { streak++; sum += streak; }
            else { streak = 0; }
        }
        printf("%d\n", sum);
    }
    return 0;
}

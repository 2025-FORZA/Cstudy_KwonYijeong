
#include <stdio.h>

char f(char x, char y) {
    if (x=='A') { if (y=='A') return 'A'; if (y=='G') return 'C'; if (y=='C') return 'A'; return 'G'; }
    if (x=='G') { if (y=='A') return 'C'; if (y=='G') return 'G'; if (y=='C') return 'T'; return 'A'; }
    if (x=='C') { if (y=='A') return 'A'; if (y=='G') return 'T'; if (y=='C') return 'C'; return 'G'; }
    if (y=='A') return 'G'; if (y=='G') return 'A'; if (y=='C') return 'G'; return 'T';
}

int main() {
    int a;
    scanf("%d", &a);
    char s[1000005];
    scanf("%s", s);
    char c = s[a-1];
    for (int i = a-2; i >= 0; i--) c = f(s[i], c);
    printf("%c\n", c);
    return 0;
}

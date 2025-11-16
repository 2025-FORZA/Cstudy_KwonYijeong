#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    const char* sa = (const char*)a;
    const char* sb = (const char*)b;

    int la = (int)strlen(sa);
    int lb = (int)strlen(sb);

    if (la != lb)
        return la - lb;
    return strcmp(sa, sb);
}

int main(void) {
    int n;
    scanf_s("%d", &n);

    char words[20000][51];

    for (int i = 0; i < n; i++) {
        scanf_s("%50s", words[i], (unsigned)51);
    }

    qsort(words, n, sizeof(words[0]), cmp);

    printf("%s\n", words[0]);
    for (int i = 1; i < n; i++) {
        if (strcmp(words[i], words[i - 1]) != 0)
            printf("%s\n", words[i]);
    }

    return 0;
}

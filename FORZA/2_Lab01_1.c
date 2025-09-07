#include <stdio.h>
#include <string.h>

int main(void) {
    char s[101];

    scanf_s("%100s", s);

    int left = 0;
    int right = (int)strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            printf("0\n");
            return 0;
        }
        left++;
        right--;
    }

    printf("1\n");
    return 0;
}

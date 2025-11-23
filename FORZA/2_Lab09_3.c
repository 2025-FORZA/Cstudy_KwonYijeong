#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int freq[101] = {0};
    int x;

    while (1) {
        if (scanf_s("%d", &x) != 1)
            return 0;

        if (x == -1) {
            break;
        } else if (x == 0) {
            int count = 0;
            for (int i = 1; i <= 50; i++) {
                if (freq[i] > 0 && freq[2 * i] > 0) {
                    count += freq[i] * freq[2 * i];
                }
            }
            printf("%d\n", count);

            for (int i = 1; i <= 100; i++) {
                freq[i] = 0;
            }
        } else {
            if (1 <= x && x <= 100) {
                freq[x]++;
            }
        }
    }

    return 0;
}

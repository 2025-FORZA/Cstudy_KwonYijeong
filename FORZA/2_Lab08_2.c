#include <stdio.h>

int main(void) {
    int a[5];

    for (int i = 0; i < 5; i++)
        scanf_s("%d", &a[i]);

    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += a[i];

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;   

            }
        }
    }

    printf("%d\n", sum / 5);
    printf("%d\n", a[2]);

    return 0;
}


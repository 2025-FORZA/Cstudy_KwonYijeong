#include <stdio.h>

int main() {
    int n;
    scanf_s("%d", &n);

    int cow[11];
    int check[11] = { 0 };
    for (int i = 0; i < 11; i++) {
        cow[i] = -1;
    }

    int cow_num, position;
    int count = 0;

    for (int i = 0; i < n; i++) {
        scanf_s("%d %d", &cow_num, &position);

        if (cow[cow_num] == -1) {
            cow[cow_num] = position;
        }
        else if (cow[cow_num] != position) {
            count++;
            cow[cow_num] = position;
        }
    }

    printf("%d\n", count);
    return 0;
}


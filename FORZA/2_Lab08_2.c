#include <stdio.h>

int main(void) {
    int N;
    if (scanf_s("%d", &N) != 1)
        return 0;

    int time[1001];
    for (int i = 0; i < N; i++)
        scanf_s("%d", &time[i]);

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (time[i] > time[j]) {
                int temp = time[i];
                time[i] = time[j];
                time[j] = temp;
            }
        }
    }

    int sum = 0;
    int total = 0;
    for (int i = 0; i < N; i++) {
        sum += time[i];
        total += sum;
    }

    printf("%d\n", total);
    return 0;
}

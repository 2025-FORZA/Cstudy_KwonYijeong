
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;
    scanf_s("%d", &N);

    int arr[100000];

    for (int i = 0; i < N; i++) {
        scanf_s("%d", &arr[i]);
    }

    qsort(arr, N, sizeof(int), compare);

    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

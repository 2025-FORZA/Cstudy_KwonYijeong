#include <stdio.h>

int main() {
    int n;
    scanf_s("%d", &n);

    int weight[50], height[50];

    for (int i = 0; i < n; i++) {
        scanf_s("%d %d", &weight[i], &height[i]);
    }

    for (int i = 0; i < n; i++) {
        int rank = 1;
        for (int j = 0; j < n; j++) {
            if (weight[j] > weight[i] && height[j] > height[i]) {
                rank++;
            }
        }
        printf("%d ", rank);
    }

    return 0;
}

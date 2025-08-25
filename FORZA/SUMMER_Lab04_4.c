
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    double max = 0.0, sum = 0.0;
    for (int i = 0; i < n; i++) {
        double score;
        if (scanf("%lf", &score) != 1) return 0;
        sum += score;
        if (score > max) max = score;
    }
    if (n == 0 || max == 0.0) { printf("0.000000\n"); return 0; }
    double result = (sum / max) * 100.0 / n;
    printf("%.6f\n", result);
    return 0;
}

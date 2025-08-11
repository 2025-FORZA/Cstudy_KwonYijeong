
#include <stdio.h>

int main() {
    int n;
    if (scanf_s("%d", &n) != 1) return 0;

    int dp[1001] = {0};
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;
    }

    printf("%d\n", dp[n]);
    return 0;
}

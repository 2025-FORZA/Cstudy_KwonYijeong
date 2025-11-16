#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n, m;
    scanf_s("%d %d", &n, &m);

    char map[51];
    int row_check[50] = { 0 };
    int col_check[50] = { 0 };

    for (int i = 0; i < n; i++) {
        scanf_s("%s", map, (unsigned)51);
        for (int j = 0; j < m; j++) {
            if (map[j] == 'X') {
                row_check[i] = 1;
                col_check[j] = 1;
            }
        }
    }

    int empty_rows = 0;
    int empty_cols = 0;

    for (int i = 0; i < n; i++) {
        if (row_check[i] == 0)
            empty_rows++;
    }

    for (int j = 0; j < m; j++) {
        if (col_check[j] == 0)
            empty_cols++;
    }

    int answer = empty_rows > empty_cols ? empty_rows : empty_cols;
    printf("%d\n", answer);

    return 0;
}

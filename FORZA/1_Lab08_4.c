
#include <stdio.h>
#include <string.h>

int main() {
    int col;
    char str[201];
    scanf("%d", &col);
    scanf("%s", str);

    int len = strlen(str);
    int row = len / col;
    char map[20][20];

    int idx = 0;
    for (int i = 0; i < row; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < col; j++) {
                map[i][j] = str[idx++];
            }
        } else {
            for (int j = col - 1; j >= 0; j--) {
                map[i][j] = str[idx++];
            }
        }
    }

    for (int j = 0; j < col; j++) {
        for (int i = 0; i < row; i++) {
            printf("%c", map[i][j]);
        }
    }

    return 0;
}

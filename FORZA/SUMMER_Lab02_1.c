
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);

        int floor, room;

        if (N % H == 0) {
            floor = H;
            room = N / H;
        } else {
            floor = N % H;
            room = N / H + 1;
        }

        printf("%d%02d\n", floor, room);
    }

    return 0;
}

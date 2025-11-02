#include <stdio.h>

int main(void) {
    int x, y;
    int monthDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    const char* wname[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };

    if (scanf_s("%d %d", &x, &y) != 2) return 0;

    int days = 0;
    for (int i = 0; i < x - 1; i++) {
        days += monthDays[i];
    }
    days += (y - 1);

    printf("%s\n", wname[days % 7]);
    return 0;
}

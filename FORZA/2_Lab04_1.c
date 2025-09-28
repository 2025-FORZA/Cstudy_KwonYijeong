
#include <stdio.h>
int main(void)
{
    int a, b, c, d, e, f;
    scanf_s("%2d:%2d:%2d", &a, &b, &c);
    scanf_s("%2d:%2d:%2d", &d, &e, &f);

    int start = a * 3600 + b * 60 + c;
    int end = d * 3600 + e * 60 + f; 

    if (end <= start) end += 24 * 3600;


    int x = end - start;
    printf("%02d:%02d:%02d\n", x / 3600, (x % 3600) / 60, x % 60);
    return 0;

 }
 
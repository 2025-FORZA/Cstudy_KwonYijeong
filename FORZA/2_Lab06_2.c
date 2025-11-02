/*
#include<stdio.h>
int main(void) {
	int e, f, c;
	if (scanf("%d %d %d", &e, &f, &c) != 3) 
		return 0;

    int bottles = e + f;
    int drinks = 0;

    while (bottles >= c)
    {
        int new_bottles = bottles / c;
        drinks += new_bottles; 
        bottles = new_bottles + (bottles % c);
    }

    printf("%d", drinks);
    return 0;
}
*/
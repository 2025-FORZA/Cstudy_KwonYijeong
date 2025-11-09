#include<stdio.h>
int main() {
    int score[10];
        for (int i = 0; i < 10; i++) {
            if (scanf_s("%d", &score[i]) != 1)
                return 0;
        }
    int sum = 0;
    int best = 0;

    for (int i = 0; i < 10; i++) {
        sum += score[i];
 
        int x = 100 - sum;  
        int y = 100 - best; 

        if (x < 0) x = -x;
        if (y < 0) y = -y;
        
        if (x < y)
            best = sum;
        else if (x == y && sum > best)
            best = sum;
    }

    printf("%d\n", best);
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int age;
    char name[101];
    int order;  // 입력 순서
} Person;

int compare(const void* a, const void* b) {
    Person* p1 = (Person*)a;
    Person* p2 = (Person*)b;

    if (p1->age == p2->age) {
        return p1->order - p2->order; // 나이가 같으면 입력 순으로
    }
    return p1->age - p2->age; // 나이순 정렬
}

int main() {
    int n;
    scanf("%d", &n);

    Person arr[100000];

    for (int i = 0; i < n; i++) {
        scanf("%d %s", &arr[i].age, arr[i].name);
        arr[i].order = i;
    }

    qsort(arr, n, sizeof(Person), compare);

    for (int i = 0; i < n; i++) {
        printf("%d %s\n", arr[i].age, arr[i].name);
    }

    return 0;
}

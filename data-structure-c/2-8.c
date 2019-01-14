#include <stdio.h>

int main() {

    int i = 10, j = 20;
    int *ptr;

    printf("\n i: %d, j: %d", i, j);
    printf("\n i addr: %u, j addr: %u", &i, &j);

    ptr = &i;
    printf("\n ptr addr: %u, ptr: %u, ptr val: %d", &ptr, ptr, *ptr);

    ptr = &j;
    printf("\n ptr addr: %u, ptr: %u, ptr val: %d", &ptr, ptr, *ptr);

    return 0;
}

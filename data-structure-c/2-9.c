#include <stdio.h>

int main() {

    int i;
    char str1[20] = "Dreams come true!", str2[20], *ptr1, *ptr2;

    ptr1 = str1;
    printf("\n str1 addr: %u, \t ptr1 addr: %u", str1, ptr1);
    printf("\n str1: %s, \t ptr1: %s", str1, ptr1);
    printf("\n\n ptr1+7 %s", ptr1 + 7);
    ptr2 = &str1[7];
    printf("\n ptr2<=str2[7]: %s\n\n", ptr2);

    for (i=16; i>=0; i--){
        putchar(*(ptr1+i));
    }
    for (i=0; i<20; i++) {
        str2[i] = *(ptr1 + i);
    }
    printf("\n\n str1: %s", str1);
    printf("\n str2: %s", str2);

    *(ptr1+0) = 'P';
    *(ptr1+1) = 'e';
    *(ptr1+2) = 'a';
    *(ptr1+3) = 'c';
    *(ptr1+4) = 'e';
    *(ptr1+5) = 's';
    printf("\n\n str1: %s\n", str1);

    return 0;
}

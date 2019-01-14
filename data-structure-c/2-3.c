#include <stdio.h>

int main() {

    int i, n = 0;
    int multiply[9];

    do {
        printf("\n1~9의 정수를 입력하세요 : ");
        scanf("%d", &n);
    } while (n<0 || n>9);

    printf("\n");
    for (i=0; i<9; i++){
        multiply[i] = n*(i+1);
        printf(" %d * %d = %d \n", n, (i+1), multiply[i]);
    }

    return 0;
}

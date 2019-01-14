#include <stdio.h>

long int hanoi(int n, int start, int work, int target);

int main() {

    long int tt = 0;
    tt = hanoi(3, 'A', 'B', 'C');
    printf("total: %ld", tt);

    return 0;
}

long int hanoi(int n, int start, int work, int target) {
    long int nums = 0;
    printf("line 16!\n");
    if (n==1) {
        printf("%c에서 원반 %d를 %c로 옮김.\n", start, n, target);
        printf("line 18!\n");
        nums += 1;
    }
    else {
        /* 원반 중 가장 큰 크기인 것을 제외한 경우 */
        nums += hanoi(n-1, start, target, work);
        printf("%c에서 원반 %d를 %c로 옮김.\n", start, n, target);
        printf("line 24!\n");
        nums += 1;
        /* 원반 중 가장 큰 크기인 것을 목표한 자리에 놓고 나머지를 옮김 */
        nums += hanoi(n-1, work, start, target);
    }
    return nums;
}

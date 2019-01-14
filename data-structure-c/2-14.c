#include <stdio.h>

long int fact(int);

int main() {

    int n;
    long int res;
    printf("정수 입력? ");
    scanf("%d", &n);
    res = fact(n);
    printf("\n =>fact(%d) is %ld!\n",n,res);

    return 0;
}

long int fact(int n) {
    long int val;
    if (n<0) {
        return 0;
    }
    else if (n<=1) {
        return 1;
    }
    else {
        printf("fact(%d) called!\n",n);
        val = (n*fact(n-1));
        printf("fact(%d) returned %ld!\n", n, val);
        return val;
    }
}

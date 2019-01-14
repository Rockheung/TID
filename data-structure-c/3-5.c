#include <stdio.h>

typedef struct {
    int row;
    int col;
    int value;
} term;

/* term smTranpose~ 와 같이 작성하지 않는 이유는 함수 안에서 정의된 배열은
 * 함수가 종료되면서 메모리에서 반환되기 때문인 것 같다.
 * 그럴 경우에는 malloc으로 수동 할당 후 그 포인터를 반환하면 되는 모양
 */
void smTranspose(term a[], term b[]) {

    int m, n, v, i, j, p;
    /* term 배열의 첫 번째 요소는 행렬의 행과 열, 0이아닌 값의 개수 */
    m = a[0].row;
    n = a[0].col;
    v = a[0].value;
    b[0].row = n;
    b[0].col = m;
    b[0].value = v;
    /* 애초에 전처리되어 들어오는데 불필요한 조건식  */
    if (v>0) {
        p=1;
        for (i=0; i<n; i++)
            for (j=1; j<=v; j++)
                if (a[j].col == i) {
                    b[p].row = a[j].col;
                    b[p].col = a[j].row;
                    b[p].value = a[j].value;
                    p++;
                }
    }

}


int main () {

    int a[10][8], b[8][10], i=0, j=0;
    int k = 0;
    term za[10], zb[10];
    za[0] = { 10, 8, 9 };

    /*  init matrix a */
    for (i=0; i<10; i++) {
        for (j=0; j<8; j++) {
            a[i][j] = (i==j?i:0);
        }
    }

    /*  print matrix a */
    for (i=0; i<10; i++) {
        for (j=0; j<8; j++) {
            printf("%d ", a[i][j]);
            printf("%c", (j!=7?' ':'\n'));
        }
    }

    /*  make zipped array,  */
    for (i=0; i<10; i++) {
        for (j=0; j<8; j++) {
            if (a[i][j] != 0) {
                
            }
        }
    }

    return 0;
}

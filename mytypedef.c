#include <stdio.h>

// intPtr_t: 「int型を表すポインタ」型
typedef int* intPtr_t;

intPtr_t foo(intPtr_t p) {
    return p + 3;
}


int main(void) {
    int a[10];

    // 配列 a の初期化
    for (int i=0; i<10; i++) {
        a[i] = i;
        // printf("a[%d]: %d\n", i, a[i]);
    }

    intPtr_t p;
    p = foo(a);

    printf("p = %d, *p = %d\n", p, *p);
    printf("a = %d, *a = %d, a+3 = %d, *(a+3) = %d\n", a, *a, a+3, *(a+3));

    /* int は 4byte なので a+3 と a を int だと思って比較すると、差は 12
      <= 12 / 4 = 3 だから、アドレスでいうと 3 離れている

    ポインタは %p で warning なしで (16進数表示で) 出力できる */

    return 0;
}

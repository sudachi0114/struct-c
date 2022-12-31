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

    printf("*p = %d\n", *p);

    return 0;
}

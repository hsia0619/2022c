#include <stdio.h>

int main() {
    int n;
    int sum = 0;


    scanf("%d", &n);


    for (int i = 0; i <= n; i++) {
        sum += 2 * i + 1;
    }

    printf("f(%d)=%d", n, sum);

    return 0;
}

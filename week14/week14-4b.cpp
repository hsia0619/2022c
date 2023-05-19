#include <stdio.h>

int main() {
    int K;
    int N = 1;
    int sum = 1;


    scanf("%d", &K);

    while (sum <= K) {
        N++;
        sum += N;
    }

    printf("%d", N);

    return 0;
}

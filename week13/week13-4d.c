#include <stdio.h>
#include <math.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int cups = ceil((double)n / m);
    printf("%d", cups);
    return 0;
}

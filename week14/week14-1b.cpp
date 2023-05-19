#include <stdio.h>

int main() {
    int num1, num2;
    int count = 0;


    scanf("%d %d", &num1, &num2);


    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1; i <= num2; i++) {
        int isPrime = 1;


        if (i <= 1) {
            isPrime = 0;
        } else {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

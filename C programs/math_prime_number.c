#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // Input
    scanf("%d", &n);

    // Prime Check
    if (n <= 1) {
        isPrime = 0;  // 0 and 1 are not prime
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Output for Prime
    if (isPrime)
        printf("Prime Number\n");
    else
        printf("Not Prime\n");

    // Even / Odd Check
    if (n % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");

    return 0;
}

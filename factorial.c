#include <stdio.h>

int main(void) {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %llu\n", n, factorial);
    return 0;
}

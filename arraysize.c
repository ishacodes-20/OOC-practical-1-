#include <stdio.h>

int main(void) {
    int numbers[4] = {5, 10, 15, 20};
    int sum = 0;
    int i;

    for (i = 0; i < 4; i++) {
        sum += numbers[i];
    }

    printf("Array elements: %d, %d, %d, %d\n",
           numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("Sum of all elements: %d\n", sum);

    return 0;
}

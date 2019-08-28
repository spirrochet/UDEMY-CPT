#include <stdio.h>

int main() {
        int number, sum;
        sum = 0;

        printf("Enter a positive number, negative to terminate: ");
        scanf("%d", &number);
        while (number >= 0) {
                sum += number;
                printf("Enter a positive number, negative to terminate: ");
                scanf("%d\n", &number);
        }

        printf("Sum of numbers: %d", sum);
        return 0;
}
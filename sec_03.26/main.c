#include <stdio.h>

int main() {
        printf("Enter two numbers: ");
        double a, b;
        scanf("%lf %lf", &a, &b);
        if (a>b)
                printf("Maximum is %lf", a);
        else if (a < b)
                printf("Maximum is %lf", b);
        else
                printf("Both values are the same!");
        return 0;
}
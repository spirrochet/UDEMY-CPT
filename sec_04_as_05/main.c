#include <stdio.h>
#include <math.h>

#define OPT_FACTORIAL 1
#define OPT_POWER 2
#define OPT_QUIT 3

int main(){
        int end = 0;

        int n;  // n is the number for which you will find factorial
        int p;  // you are going to keep the factorial of n in p
        double base, exp; // for a^b

        int option; // for keeping the menu option
        while(!end){
                printf("---- MENU ----\n"
                       "1. Find factorial\n"
                       "2. Find a^b\n"
                       "3. Quit\n"
                       "What you want to do? ");
                scanf("%d", &option);
                switch (option) {
                        case OPT_FACTORIAL :
                                printf("Enter number: ");
                                p = 1;
                                scanf("%d", &n);
                                if (n < 0 || n > 10)
                                        printf("Invalid number for factorial\n");
                                else {
                                        for (int i = n; i > 1; i--)
                                                p *= i;
                                        printf("Factorial of %d is %d\n", n, p);
                                }
                                break;
                        case OPT_POWER :
                                printf("Enter a: ");
                                scanf("%lf", &base);
                                printf("Enter b: ");
                                scanf("%lf", &exp);
                                double res = pow(base, exp);
                                printf("%g^%g = %.1lf\n", base, exp, res);
                                break;
                        case OPT_QUIT :
                                printf("*** Thank you ***\n");
                                end = 1;
                                break;
                        default:
                                printf("Invalid menu option\n");
                }
        }
}
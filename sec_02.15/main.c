/*
 * Instructions:
Write a program that will input 3 integer values from user and then will
display the average of them. You would require to declare 3 integer variables
for holding the integers given by the users from keyboard and then you need
another variable for holding the average. Decide by yourself about the datatype
of the average variable.

Finally print the average into console using printf.
 */
#include <stdio.h>

int main() {
        int a = 0, b = 0, c = 0;
        float avg = 0;
        printf("Please provide int a: ");
        scanf(" %d", &a);
        printf("\nPlease provide int b: ");
        scanf(" %d", &b);
        printf("\nPlease provide int c: ");
        scanf(" %d", &c);
        avg = (float ) (a + b + c) / 3;
        printf("The average of int a, b and c is: %f", avg);
        return 0;
}
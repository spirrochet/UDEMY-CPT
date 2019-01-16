#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int getYear(int *);
int isLeapYear(int);

int main() {
        int year;
        printf("Please provide a year to test if it is a leap year.\n");
        if (getYear(&year))
                printf("Issue determining year. Please provide a valid year!\n");
        printf("The year %d is %s leap year!\n", year, isLeapYear(year) ? "not a" : "a");
        return 0;
}

/*
 * getYear will request a year from the user on stdin.
 *
 * Returns:
 *      int: Valid year = EXIT_SUCCESS, Error or year < zero = EXIT_FAILURE
 */
int getYear(int *year) {
        char userInput[10];
        printf("%s", "\nEnter year: ");
        fgets(userInput, sizeof(userInput), stdin);
        char *endPtr;
        errno = 0;
        *year= strtol(userInput, &endPtr, 10);
        return ((errno == EINVAL || errno == ERANGE) ||
                (userInput == endPtr || errno != 0) ||
                (year < 0)) ? EXIT_FAILURE : EXIT_SUCCESS;
}

/*
 * isLeapYear determines if the provided year is a leap year.
 *
 * Returns:
 *      int: Is leap year = EXIT_SUCCESS, Not leap year = EXIT_FAILURE
 */
int isLeapYear(int year) {
        return (year%4==0&&year%100!=0)||(year%400==0)? EXIT_SUCCESS : EXIT_FAILURE;
}
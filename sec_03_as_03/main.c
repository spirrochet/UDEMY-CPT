#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main() {
        printf("Welcome to the world of Pupeta.\n");
        printf("Pupeta is very sensitive to the number of neighbors he has.\n");
        printf("Please provide a number between 0 and 8, inclusive to indicate"
               "the number of neighbors Pupeta has.\n");
        printf("Enter your number here: ");
        char userInput[2];
        int num_neighbor;
        fgets(userInput, sizeof(userInput), stdin);
        char *behaviors[5] = {"Sad and will force you to listen to his story, will make you late",
                              "He will ask you to deliver half of the pizza to his only neighbor, you may be late.",
                              "Will have great mood and will be singing song. May crack joke as well. You will get\n"
                               "good tips, definitely.",
                              "He will be making great drink for his neighbors and will invite you to taste.\n"
                               "But will not give you tip.",
                              "Too angry and furious, deliver the pizza and leave ASAP."};
        char behaviorsMatch[9] = {0,1,2,2,2,2,4,3,4};
        char *endPtr;
        errno = 0;
        int userNum = strtol(userInput, &endPtr, 10);
        if ((errno == EINVAL || errno == ERANGE || errno != 0) || userInput == endPtr) {
                printf("Unable to determine what number was provided. Please try"
                       " again. Make sure you only enter one character, a digit, "
                       "in the range 0 to 8 inclusive. (0,1,2,3,4,5,6,7,8)\n");
                return EXIT_FAILURE;
        }

        else if (userNum > 8 || userNum < 0) {
                printf("Invalid number. Number must be between 0 and 8, "
                       "but was: %d", userNum);
                return EXIT_FAILURE;
        } else {
                printf("Perfect, the number you provided was: %d\n", userNum);
                printf("%s", behaviors[behaviorsMatch[userNum]]);
        }

        return EXIT_SUCCESS;
}
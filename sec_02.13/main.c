#include <stdio.h>

int main() {
/*        char ch = 'c';
        printf("Character is %c\n", ch);
//        printf("Enter a character: ");
//        char another;
//        scanf("%c", &another);
//        another = getchar();
//        printf("\nYour character is: %c", another);
//        printf("%d is %c", ch, ch);
        for (int i = 65; i < 91; i++)
                printf("%d - %c\n", i,i);*/
        char ch;
        printf("Please enter one ASCII alphabetic character: ");
        scanf("%c", &ch);
        if (ch < 'A' || ch > 'z' || (ch > 'Z' && ch < 'a'))
                printf("The character you entered was not one of A-Z or a-z; you entered: %c", ch);
        else
                printf("The alphabetic character you entered was: %c", ch);
        return 0;
}
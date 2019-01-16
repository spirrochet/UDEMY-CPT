#include <stdio.h>

int main() {
        int age;
        printf("Enter your age: ");
        scanf("%d", &age);

        switch (age) {
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                case 18:
                case 19: printf("Teenager!");
                        break;
                default:
                        printf("Not a teenager\n");
                        break;
        }

        return 0;
}
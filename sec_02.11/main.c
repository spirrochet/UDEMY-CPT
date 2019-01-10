#include <stdio.h>

int main() {
        int var = 10;
        printf("var = %x\n", var);

        int var1 = 0x56;
        printf("var1 = %d\n", var1);
        printf("var1 = 0%o\n", var1);
        printf("var1 = 0x%x\n", var1);
        return 0;
}
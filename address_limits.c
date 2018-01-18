#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=======================================\n");
    printf(" Address and Limits of Variables \n");
    printf("=======================================\n");

    int number = pow(2, 31);
    char character = 129;
    int number2 = 12;

    number = number + 2;

    printf(" Display the address of character: 0x%x \n",&character);
    printf(" Display the address of number: 0x%x \n",&number);
    printf(" Display the address of number2: 0x%x \n",&number2);

    printf(" Value of character = %d \n",character);
    printf(" Value of number = %d \n",number);
    printf(" Value of number2 = %d \n",number2);

    return 0;
}


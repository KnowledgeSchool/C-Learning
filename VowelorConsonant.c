#include <stdio.h>
#include <stdlib.h>

/* This Programs Checks whether the Input Alphabet is Vowel or Consonant using Switch Case Statement */
int main()
{
    char alphabet;

    printf(" ********************************************************************************************* \n");
    printf(" Program to check whether the Input Alphabet is Vowel or Consonant using Switch Case Statement \n");
    printf(" ********************************************************************************************* \n");

    printf(" Input the Alphabet : ");
    scanf("%c",&alphabet);

    switch(alphabet)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
                    printf(" Alphabet is a Vowel : %c \n",alphabet);
                    break;
        default:
                    printf(" It is not a Vowel : %c \n",alphabet);
    }

    return 0;
}

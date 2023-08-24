#include <stdio.h>
#include <string.h>
int main()

{
    int quotient, remainder, decimal_representation, output_decimal;
    char reverse_hexa_representation[50] = "";
    printf("Enter a decimal number:\n");
    scanf("%d", &decimal_representation);
    output_decimal = decimal_representation;
    // using algorithm to find reverse order of binary representaion

    if (decimal_representation==0)
    {
        printf("Hexa decimal representation of 0 is :\n0\n");
    }
    else
    {
        while (decimal_representation != 0)
        {
            char hexabuff[3], hexachar[2]; // buffer to add character to string
            quotient = decimal_representation / 16;
            remainder = decimal_representation % 16;
            decimal_representation = quotient;
            switch (remainder)
            {
            case 10:
                hexachar[0] = 'A';
                hexachar[1] = '\0';
                strcat(reverse_hexa_representation, hexachar);
                break;

            case 11:
                hexachar[0] = 'B';
                hexachar[1] = '\0';
                strcat(reverse_hexa_representation, hexachar);
                break;
            case 12:
                hexachar[0] = 'C';
                hexachar[1] = '\0';
                strcat(reverse_hexa_representation, hexachar);
                break;
            case 13:
                hexachar[0] = 'D';
                hexachar[1] = '\0';
                strcat(reverse_hexa_representation, hexachar);
                break;
            case 14:
                hexachar[0] = 'E';
                hexachar[1] = '\0';
                strcat(reverse_hexa_representation, hexachar);
                break;
            case 15:
                hexachar[0] = 'F';
                hexachar[1] = '\0';
                strcat(reverse_hexa_representation, hexachar);
                break;

            default:

                sprintf(hexabuff, "%d", remainder);
                strcat(reverse_hexa_representation, hexabuff);
                break;
            }
        }

              int length = strlen(reverse_hexa_representation);
              char hexa_representation[50] = "";

              // reversing the order of reversed string to get correct string
              for (int i = 0; i < length; i++)
              {
                  hexa_representation[i] = reverse_hexa_representation[length - i - 1];
              }
              hexa_representation[length] = '\0'; // null terminating the string

              printf("Hexa decimal representation of %d is :\n%s\n", output_decimal, hexa_representation);
    }       
    return 0;
}
/*
future updates:
1. add a function to detect bad characters
2. use it for bigger numbers

*/
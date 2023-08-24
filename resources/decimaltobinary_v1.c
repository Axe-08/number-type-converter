#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int quotient, remainder, decimal_representation, output_decimal;
    char reverse_binary_representation[50] = "";
    printf("Enter a decimal number:\n");
    scanf("%d", &decimal_representation);
    output_decimal=decimal_representation;
    // using algorithm to find reverse order of binary representaion

    while (decimal_representation != 0)
    {
        char binbuff[2]; // buffer to add character to string
        quotient = decimal_representation / 2;
        remainder = decimal_representation % 2;
        decimal_representation = quotient;
        sprintf(binbuff, "%d", remainder);
        strcat(reverse_binary_representation, binbuff);
    }

    int length = strlen(reverse_binary_representation);
    char binary_representation[50] = "";

    // reversing the order of reversed string to get correct string
    for (int i = 0; i < length; i++)
    {
        binary_representation[i] = reverse_binary_representation[length - i - 1];
    }
    binary_representation[length] = '\0'; // null terminating the string
    
    printf("Binary representation of %d is :\n%s\n", output_decimal, binary_representation);
    
    return 0;
}
/*
future updates:
1. add a function to detect bad characters
2. use it for bigger numbers 
*/
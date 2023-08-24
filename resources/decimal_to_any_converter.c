#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int quotient, remainder, decimal_representation, output_decimal, base;
    char reverse_base_representation[50] = "";
    printf("Enter a decimal number:\n");
    scanf("%d", &decimal_representation);
    printf("Enter the base you want to convert it into (between 2 and 10): \n");
    scanf("%d", &base);
    output_decimal = decimal_representation;
    // using algorithm to find reverse order of base(any) representaion

    while (decimal_representation != 0)
    {
        char basebuff[2]; // buffer to add character to string
        quotient = decimal_representation / base;
        remainder = decimal_representation % base;
        decimal_representation = quotient;
        sprintf(basebuff, "%d", remainder);
        strcat(reverse_base_representation, basebuff);
    }

    int length = strlen(reverse_base_representation);
    char base_representation[50] = "";

    // reversing the order of reversed string to get correct string
    for (int i = 0; i < length; i++)
    {
        base_representation[i] = reverse_base_representation[length - i - 1];
    }
    base_representation[length] = '\0'; // null terminating the string

    printf("Representation of %d in base %d is :\n%s\n", output_decimal, base, base_representation);

    return 0;
}
/*
future updates:
1. add a function to detect bad characters
2. use it for bigger numbers
*/
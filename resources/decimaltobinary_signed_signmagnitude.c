#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
    int quotient, remainder, decimal_representation, output_decimal, index;
    char reverse_binary_representation[50] = "";
    char binary_representation[50] = "";
    bool neg;
    printf("Enter a decimal number:\n");
    scanf("%d", &decimal_representation);
    output_decimal = decimal_representation;

    if (decimal_representation < 0)
    {
        decimal_representation = -(decimal_representation);
        neg = true;
    }
    else
    {
        neg = false;
    }

    // using algorithm to find reverse order of binary representaion
    if (decimal_representation == 0)
    { // special case for 0
        binary_representation[0] = '0';
    }
    else
    {
        index = 0;
        while (decimal_representation != 0)
        {
            char binchar = (decimal_representation % 2) + '0';
            reverse_binary_representation[index] = binchar;
            decimal_representation /= 2;
            index++;
        }
                //adding the case for negetive
        if (neg)
        {
            reverse_binary_representation[index] = '1';
        }
        else
        {
            reverse_binary_representation[index] = '0';
        }
        // reversing the order of reversed string to get correct string
        for (int i = 0; i < index + 1; i++)
        {
            binary_representation[i] = reverse_binary_representation[index - i];
        }
        binary_representation[index + 1] = '\0'; // null terminating the string
    }
    printf("Binary representation of %d is :\n%s\n\n\t\t\t**first digit of binary number represents sign 1 reps -ve while 0 reps +ve**", output_decimal, binary_representation);

    return 0;
}
/*
future updates:
1. add a function to detect bad characters
2. use it for bigger numbers
*/
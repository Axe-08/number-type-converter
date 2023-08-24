#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    long b, a;
    char binstr[50];
    printf("enter binary number\n");
    scanf("%49s", binstr);

    
    int length = strlen(binstr);
    /*printf("%d", length);
     */
    if (binstr[0] == '0')
    {
        printf("Please provide a binary expression without any uneccesary bits! i.e. write '1'as greatest significant digit");
    }
    else{
            
            for (int i = 0; i < length; i++)
            {
                int digit = binstr[i] - '0';
                /*printf("\ncharacter: %c, integer:%d", binstr[i], digit);
                 */
                b = digit * pow(2, length - i - 1);
                a = a + b;
            }
           

        }
     int quotient, remainder, output_decimal;
    char reverse_hexa_representation[50] = "";
    long decimal_representation=a;
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

                printf("Hexa decimal representation of %s is :\n%s\n", binstr, hexa_representation);
    } 
    return 0;
}
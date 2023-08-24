#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char hexastr[50];
    printf("enter hexadecimal number\n");
    scanf("%49s", hexastr);

    
    int length = strlen(hexastr);
    /*printf("%d", length);
     */
    if (hexastr[0] == '0')
    {
        printf("Please provide a hexadecimal expression without any uneccesary bits! i.e. write '0'as not the greatest significant digit");
    }
    else{
            long b, a;
            int digit;
            for (int i = 0; i < length; i++)
            {switch (hexastr[i])
            {
            case 'F':
                digit=15;
                break;
            case 'E':
                digit=14;
                break;
            case 'D':
                digit=13;
                break;
            case 'C':
                digit=12;
                break;
            case 'B':
                digit=11;
                break;
            case 'A':
                digit=10;
                break;
            default:
                 digit = hexastr[i] - '0';
                /*printf("\ncharacter: %c, integer:%d", binstr[i], digit);
                 */
                
                break;
            }
               b = digit * pow(16, length - i - 1);
                a = a + b;
            }
            
             
             int decimal_representation, output_decimal, index = 0;
    char reverse_binary_representation[50] = "";
    decimal_representation = a;
    output_decimal = decimal_representation;
    // using algorithm to find reverse order of binary representaion
    if (decimal_representation == 0)
    {
        printf("Binary representation of %s is :\n0\n", hexastr);
    }
    else
    {

        while (decimal_representation != 0)
        {
            reverse_binary_representation[index] = (decimal_representation % 2) + '0';
            index++;
            decimal_representation /= 2;
        }

        char binary_representation[50] = "";

        // reversing the order of reversed string to get correct string
        for (int i = 0; i < index; i++)
        {
            binary_representation[i] = reverse_binary_representation[index - i - 1];
        }
        binary_representation[index] = '\0'; // null terminating the string

        printf("Binary representation of %s is :\n%s\n", hexastr, binary_representation);
    }
        }
    return 0;
}

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
            printf("\ndecimal representation of %s is:\n%ld",hexastr, a);
        }
    return 0;
}
/*
drawbacks:  1.cannot write 0 before 1
            2.cannot calculate for decimal places.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
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
            long b, a;
            for (int i = 0; i < length; i++)
            {
                int digit = binstr[i] - '0';
                /*printf("\ncharacter: %c, integer:%d", binstr[i], digit);
                 */
                b = digit * pow(2, length - i - 1);
                a = a + b;
            }
            printf("\ndecimal representation is:\n%ld", a);
        }
    return 0;
}
/*
drawbacks:  1.cannot write 0 before 1
            2.cannot calculate for decimal places.
*/
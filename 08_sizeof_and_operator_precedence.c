/* sizeof operator and operator precedence */
#include <stdio.h>

int main()
{
    int result;

    printf("sizeof(int)    = %zu bytes\n", sizeof(int));
    printf("sizeof(float)  = %zu bytes\n", sizeof(float));
    printf("sizeof(double) = %zu bytes\n", sizeof(double));
    printf("sizeof(char)   = %zu byte\n\n", sizeof(char));

    result = 10 + 5 * 2;
    printf("10 + 5 * 2   = %d\n", result);

    result = (10 + 5) * 2;
    printf("(10 + 5) * 2 = %d\n", result);

    result = 5 > 3 && 2 < 4;
    printf("5 > 3 && 2 < 4 = %d\n", result);

    return 0;
}

#include <stdio.h>

int main(void)
{
    printf("char       : %zu\n", sizeof(char));
    printf("int        : %zu\n", sizeof(int));
    printf("char *     : %zu\n", sizeof(char *));
    printf("int *      : %zu\n", sizeof(int *));
    printf("double *   : %zu\n", sizeof(double *));
    printf("void *     : %zu\n", sizeof(void *));

    return 0;
}

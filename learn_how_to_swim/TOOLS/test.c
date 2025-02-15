#include <stdio.h>

int main(void)
{
    printf("char : %zu octets\n", sizeof(char));
    printf("int : %zu octets\n", sizeof(int));
    printf("long : %zu octets\n", sizeof(long));
    printf("double : %zu octets\n", sizeof(double));
    return 0;
}

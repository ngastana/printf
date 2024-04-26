#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    char *str = "";

    a = ft_printf("%s\n", str);
    b = printf("%s\n", str);
    printf ("%i\n%i", a ,b);
    return (0);
}
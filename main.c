#include "libftprintf.h"
#include <stdio.h>

int main()
{
    ft_printf("42%56lc42");
    printf("42%56lc42",'a');
    return(0);
}
#include <stdlib.h>
#include "libft.h"

char *ft_itoa_base(int value, int base)
{
    int size;
    long nbr;
    char *result;
    char *ref_base;

    nbr = value;
    ref_base = "0123456789ABCDEF";

    if (base < 2 || base > 16)
        return (NULL);

    size = ft_numlen(nbr, base);

    if (!(result = (char *)malloc(sizeof(*result) * (size + 1))))
        return (NULL);

    result[size--] = '\0';
    result[0] = (value < 0 ? '-' : '0');

    if (value < 0)
        nbr = -nbr;

    while (nbr > 0)
    {
        result[size--] = ref_base[nbr % base];
        nbr /= base;
    }

    return (result);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        printf("%s\n", ft_itoa_base(atoi(argv[1]), atoi(argv[2])));
    }
}

/*
** Usage: ./a.out 23435453 16
**        ./a.out 23435453 2
**        ./a.out 23435453 10
**        ./a.out 23435453 8
** For example, base 4 would be "0123" and base 16 "0123456789ABCDEF".
*/
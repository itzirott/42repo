#include "mylib.h"
#include <stdio.h>

typedef struct dictionary
{
	int		num;
	char	*name;
} dict;

void	ft_dictionary (void)
{
	dict	tab[41];
	int		i;

	printf ("Tamaño de cada línea del STRUCT: %lu\n", sizeof(tab[0]));
	printf ("Tamaño de cada línea del STRUCT: %lu\n", sizeof(tab[1]));
}

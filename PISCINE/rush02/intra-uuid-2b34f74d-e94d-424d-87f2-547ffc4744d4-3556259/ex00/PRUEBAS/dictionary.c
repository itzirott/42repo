#include "dictionary.h"
#include <stdlib.h>
#include <stdio.h>

Dict *new_dict (void)
{
	Dict *D = (Dict *) malloc (sizeof (Dict));
	D -> pairs = NULL;
	D -> size = 0;
	return D;
}
void add_dict (Dict *D, const int *key, const char *value)
{
//	grow_dict(&D, 1);
	D-> pairs [D -> size - 1] -> key = key;
	D-> pairs [D -> size - 1] -> value = value;
}
void print_dict(const Dict *D)
{
	int 	i;

	i = 0;
	while(i < D ->size)
	{
		printf("%d: %s \n", D -> pairs[i] -> key, D -> pairs[i] -> value);
		i++;
	}
}
/*
void grow_dict(Dict **D, int units)
{
	Dict *E = new_dict();
	E -> size = (**D).size;
	init_dict(E);
}
*/
/*void free_dict (Dict *D)
{
	int	i;

	i = 0;
	while (i < D -> size)
	{
		free(D -> pairs[i]);
		i++;
	}
	free(D -> pairs);
	free(D);
}
*/
/*void init_dict (Dict *D)
{
	int	i;

	i = 0;
	while (i < D -> size)
	{
		D -> pairs[i] = (Pair *) malloc(sizeof(Pair));
		D -> pairs[i] -> key = NULL;
		D -> pairs[i] -> value = NULL;
		i++;
	}
}*/

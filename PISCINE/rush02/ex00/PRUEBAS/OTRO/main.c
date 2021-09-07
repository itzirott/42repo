#include <stdio.h>
#include <stdlib.h>

typedef struct s_dict
{
	int		num;
	char	*text;
} t_dict;

void	vaciar (char temp[])
{
	int i;

	i = 0;
	while ( i < 0)
	{
		temp[i] = '\0';
		i++;
	}
}

void ft_copy (char temp[], int i)
{
	int	N;
	t_dict	*tab;

//	N = strlen(temp) + 1;

	tab[i].num = (int*)malloc(sizeof (int)* q:100);
	tab[i].text = (char*)malloc(sizeof (char)* 100);
}

int main (void)
{
	FILE	*f;
	int		i;
	int		j;
	char	aux;
	char	temp[50];

	f = open ("numbers.dict", O_RONLY);
	if (f == -1)
	{
		printf("error al abrir el fichero\n");
		exit(1);
	}

	t_dict	*tab;
	
	// LEER CONTENIDO DE FICHERO
	
 	dict = (t_dict*)malloc(sizeof(t_dict)*50);

	i = 0;
	while (!feof(f))
	{
		vaciar (temp);
		j = 0;
		aux = '0';
		while (aux != ':')
		{
			//fget
			if (aux != ':')
				temp[j] = aux;
			j++;
		}
		ft_copy (temp, i);

		i++;

	}

	




	while (i < 2)
	{
		printf ("i: %d, s: %s\n", d[i].i, d[i].s);
		i++;
	}
	free(d);
	return (0);
}

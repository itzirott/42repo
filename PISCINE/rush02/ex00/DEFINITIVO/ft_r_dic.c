#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_dict
{
	int		num;
	char	*text;
} t_dict;

void	ft_fich	(void)
{
	int		fd;
	char	buffer[1000];
	ssize_t	n_bytes;

	fd = open ("numbers.dict", O_RDONLY);

	if (fd == -1)
	{
		printf("Error al abrir el archivo \n");
	}
	else
	{
		printf("File Descriptor: %d\n", fd);
		n_bytes = read(fd,buffer, 1000);
		close(fd);
	}
	if (n_bytes == 0)
		printf("Archivo vacio \n");
	else
		printf("El numero de caracteres es %d, contenido %s \n",(int)n_bytes,buffer);
//	return (0);
}


void	ft_r_dic(char *dict, int size)
{
	int fd;
	int read_c;
	char aux;
	char linea[50];
	int  i;
	int j;
	t_dict *tab;
	
	tab[i].num = (int)malloc(sizeof (int) * 100);
	tab[i].text = (char*)malloc(sizeof (char) * 100);

	fd = open("numbers.dict", O_RDONLY);
	j = 0;
	while (j <= size)
	{
		printf("EN EL WHILE\n");	
		i = 0;	
		while (aux != ':')
		{				
			read_c= read(fd, &aux, 1);
			if(read_c != 0)
			{
				linea[i] = aux;
			}
			i++;
		}	
		tab[j].text = linea;
		printf("NUM:%s\n", tab[j].text);
/*		while (aux != '\n')
		{				
			read_c= read(fd, &aux, 1);
			linea[i] = aux;
			i++;
		}	*/
		j++;
	}
	close(fd);
	printf("\n%s", linea);
}

int size_of_file(char *dict);

int main (int argc, char **argv)
{
	char buffer[50];
	int size;
	char diccionario[12] = "numbers.dict";

//	printf("cantidad de argumentos introducidos: %d", argc);
//	size = size_of_file(diccionario);
	ft_fich();

//	printf("El diccionario tiene %d lineas", size);
//	ft_r_dic(argv[1], size);
}

int size_of_file(char *dict)
{
	int i;
	int fd;
	int size;
	char aux = 0;
	int read_c;

	i = 0;
	size = 0;
	fd = open(dict, O_RDONLY);
	while(i < 50)     //(aux != EOF) 
	{
		read_c = read(fd, &aux, 1);
		if (aux == ':')
			size++;
		if (aux == EOF)
			break;
		i++;
	}
	close(fd);
	printf("SIZE: %d\n", size);
	return (size);
}

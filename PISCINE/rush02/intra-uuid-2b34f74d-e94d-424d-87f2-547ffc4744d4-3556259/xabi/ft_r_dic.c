#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct
{
		int digit;
		char *number;
}entries;

entries *entry;

void	ft_r_dic(char *dict)
{
	char dic;
	int bytes;
	char readed[0];
	int fd;
	int read_c;
	char aux;
	char linea[50];
	int  i = 0;
	int j;
	

	fd = open("numbers.dict", O_RDONLY);
//leer una linea
//	while(!feof(fd))
//	{	
		
	//leer una linea
		while (aux != '\n')
		{				
			read_c= read(fd, &aux, 1);
			linea[i] = aux;
			i++;
		}	
//	}
	close(fd);
	printf("\n%s", linea);
}

int size_of_file(char *dict);

int main (int argc, char **argv)
{
	char buffer[50];
	int size;
	char diccionario[12] = "numbers.dict";

	printf("cantidad de argumentos introducidos: %d", argc);
	size = size_of_file(diccionario);
	printf("El diccionario tiene %d lineas", size);
	ft_r_dic(argv[1]);
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
	while(i < 7500)     //(aux != EOF) 
	{
		read_c = read(fd, &aux, 1);
		if (aux == ':')
			size++;
		if (aux == EOF)
			break;
		i++;
	}
	close(fd);
	return (size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fich.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 12:56:19 by iarribas          #+#    #+#             */
/*   Updated: 2021/05/01 15:57:45 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylib.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

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

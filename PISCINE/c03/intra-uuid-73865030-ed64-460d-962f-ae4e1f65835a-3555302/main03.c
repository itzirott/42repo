/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 17:12:09 by iarribas          #+#    #+#             */
/*   Updated: 2021/04/29 11:15:43 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ex00/ft_strcmp.c"
//#include "ex01/ft_strncmp.c"
//#include "ex02/ft_strcat.c"
//#include "ex03/ft_strncat.c"
//#include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"

#include <stdio.h>
#include <string.h>

int	main (void)
{
	
	//------EX00 STRCMP
/*	
 	int		diff;
	char 	a[40] = "Hola buenas tardes me llamo Pedro";
	char 	b[40] = "me";
	
	printf("A: %s\n", a);
	printf("B: %s\n", b);
	diff = strcmp(a,b);
	printf("con STRCMP: %d\n",diff);
	diff = ft_strcmp(a,b);
	printf("con el PROG: %d\n",diff);
*/	
/*
*/
	//------EX01 STRNCMP
/*
 	int		diff;
	char 	a[40] = "Hola buenas tardes me llamo Pedro";
	char 	b[40] = "Hola que tal";
	
	printf("A: %s\n", a);
	printf("B: %s\n", b);
	diff = strncmp(a,b,5);
	printf("con STRCMP: %d\n",diff);
	diff = ft_strncmp(a,b,5);
	printf("con el PROG: %d\n",diff);

*/
	//------EX02 
/*
	char	a[25] = "Hola";
	char	b[25] = "Hey dude";
	//char	*c;

	//c =	strcat(a,b);
	//printf("con STRCMP: %s\n", c);
	printf("con el PROG: %s\n",ft_strcat(a,b));

*/
	//------EX03 STRNCAT
/*
	char	a[25] = "Hola como estas";
	char	b[25] = "como";
	//char	*c;

	//c =	strncat(a,b, 4);
	//printf("con STRNCAT: %s\n", c);
	printf("con el PROG: %s\n",ft_strncat(a,b));
*/

	//------EX04 STRSTR
/*
 	char    a[25] = "Hola como estas";
	char    b[25] = "";
    //char  *c;

    //c =   strncat(a,b, 4);
	printf("con STRSTR: %s\n", strstr(a,b));
	printf("con el PROG: %s\n",ft_strstr(a,b));

*/
	//------EX05 STRLCAT
	char    a[25] = "Hola";
	char    b[25] = "como estas";
	char    c[25] = "Hola";
	char    d[25] = "como estas";

	printf("con STRLCAT: %lu\n", strlcat(a,b,10));
	printf("con STRLCAT: %s\n", a);
	printf("con el PROG: %d\n",ft_strlcat(c,d,10));
	printf("con FT_STRLCAT: %s\n", c);

/*
*/

	return (0);
}

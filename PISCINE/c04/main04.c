/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 17:12:09 by iarribas          #+#    #+#             */
/*   Updated: 2021/05/03 19:53:29 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ex00/ft_strlen.c"
//#include "ex01/ft_putstr.c"
//#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"

#include <stdio.h>
#include <string.h>

int	main (void)
{

	//------EX00 STRLEN
/* 	int		l1;
	int		l2;
	char 	a[40] = "Hola que tal";
	
	printf("A: %s\n", a);
	l1 = strlen(a);
	printf("con STRLEN: %d\n",l1);
	l2 = ft_strlen(a);
	printf("con el PROG: %d\n",l2);
*/	
	//------EX01 PUTSTR
/*
	char 	b[40] = "Hola que tal";
	
	ft_putstr(b);
*/
	//------EX02 PUTNBR
/*
	int	a = 3;
	int	b = 23;
	int c = -2147483648;
	int d = -234523;
	
	printf("a: %d\n", a);
	ft_putnbr(a);
	printf("\n");
	printf("b: %d\n", b);
	ft_putnbr(b);
	printf("\n");
	printf("c: %d\n", c);
	ft_putnbr(c);
	printf("\n");
	printf("d: %d\n", d);
	ft_putnbr(d);
	printf("\n");

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

	//------EX04 ATOI

 	char    a[25] = "---+--+1234ab567";
	int		numa;
 	char    b[25] = "---+--+ab567";
	int		numb;

	numa = ft_atoi (a);
	numb = ft_atoi (b);
	printf("---+--+1234ab567 => %d\n", numa);
	printf("---+--+1234ab567 => %d\n", numb);

	//------EX05 



	return (0);
}

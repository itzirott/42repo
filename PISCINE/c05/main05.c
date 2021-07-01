/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 08:27:11 by iarribas          #+#    #+#             */
/*   Updated: 2021/05/03 15:53:22 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ex00/ft_iterative_factorial.c"
//#include "ex01/ft_recursive_factorial.c"
//#include "ex02/ft_iterative_power.c"
//#include "ex03/ft_recursive_power.c"
//#include "ex04/ft_fibonacci.c"
//#include "ex05/ft_sqrt.c"
//#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"
//#include "ex08/ft_ten_queens_puzzle.c"

#include <stdio.h>

int	main (void)
{
	//------EX00 ITERATIVE FACTORIAL
/*	
	printf("FACTORIAL DE 5: %d\n",ft_iterative_factorial(5));
	printf("FACTORIAL DE 0 %d\n",ft_iterative_factorial(0));
	printf("FACTORIAL DE -20: %d\n",ft_iterative_factorial(-20));
*/
	//------EX01 RECURSIVE FACTORIAL
/*	
	printf("FACTORIAL DE 5: %d\n",ft_recursive_factorial(5));
	printf("FACTORIAL DE 0: %d\n",ft_recursive_factorial(0));
	printf("FACTORIAL DE -20: %d\n",ft_recursive_factorial(-20));
*/	
	//------EX02 ITERATIVE POWER
/*	
	printf("Power 2, 4: %d\n",ft_iterative_power(2,4));
	printf("Power -3, 3: %d\n",ft_iterative_power(-3,3));
	printf("Power 2, 0: %d\n",ft_iterative_power(2,0));
*/
	//------EX02 ITERATIVE POWER
	
//	printf("Power 2, 4: %d\n",ft_recursive_power(2,4));
//	printf("Power -3, 3: %d\n",ft_recursive_power(-3,3));
//	printf("Power 2, 0: %d\n",ft_recursive_power(2,0));

    //------EX04 ft_fibonacci.c
/*	
	printf("Index 0: %d\n",ft_fibonacci(0));
	printf("Index 1: %d\n",ft_fibonacci(1));
	printf("Index 2: %d\n",ft_fibonacci(2));
	printf("Index 3: %d\n",ft_fibonacci(3));
	printf("Index 7: %d\n",ft_fibonacci(7));
	printf("Index 8: %d\n",ft_fibonacci(8));
*/
    //------EX05 ft_sqrt.c
/*
	printf("SQRT de 0: %d\n",ft_sqrt(0));
	printf("SQRT de 1: %d\n",ft_sqrt(1));
	printf("SQRT de 4: %d\n",ft_sqrt(4));
	printf("SQRT de 25: %d\n",ft_sqrt(25));
	printf("SQRT de 144: %d\n",ft_sqrt(144));
	printf("SQRT de 20736: %d\n",ft_sqrt(20736));
*/
	//------EX06 ft_is_prime.c
/*
	printf("0 PRIMO?: %d\n",ft_is_prime(0));
	printf("1 PRIMO?: %d\n",ft_is_prime(1));
	printf("2 PRIMO?: %d\n",ft_is_prime(2));
	printf("11 PRIMO?: %d\n",ft_is_prime(11));
	printf("12 PRIMO?: %d\n",ft_is_prime(12));
	printf("23 PRIMO?: %d\n",ft_is_prime(23));
	printf("25 PRIMO?: %d\n",ft_is_prime(25));
*/	
    //------EX07 ft_find_next_prime.c

	printf("siguiente PRIMO a 0?: %d\n",ft_find_next_prime(0));
	printf("siguiente PRIMO a -2147483648?: %d\n",ft_find_next_prime(-2147483648));
	printf("siguiente PRIMO a 1?: %d\n",ft_find_next_prime(1));
	printf("siguiente PRIMO a 2?: %d\n",ft_find_next_prime(2));
	printf("siguiente PRIMO a 3?: %d\n",ft_find_next_prime(3));
	printf("siguiente PRIMO a 40?: %d\n",ft_find_next_prime(40));
	printf("siguiente PRIMO a 56?: %d\n",ft_find_next_prime(56));
	printf("siguiente PRIMO a 67?: %d\n",ft_find_next_prime(67));

    //------EX08 ft_ten_queens_puzzle.c

//	printf("Indexr 2, 4: %d\n",ft_recursive_power(2,4));


	return (0);
}

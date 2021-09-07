/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:56:21 by iarribas          #+#    #+#             */
/*   Updated: 2021/05/02 09:18:11 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "dictionary.h"
//#include "mylib.h"

int main (void)
{
//	ft_fich ();
//	ft_dictionary ();
	Dict *D = new_dict();
	add_dict(D, 23, "veinti tres");
	add_dict(D, 10, "diez");
	add_dict(D, 5, "cinco");
	print_dict(D);
	free_dict(D);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:20:07 by iarribas          #+#    #+#             */
/*   Updated: 2021/06/10 19:37:48 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	size_t	j;

	if (!s)
		return ;
	j = 0;
	i = ft_strlen(s);
	while (j < i)
	{
		write(fd, &s[j], 1);
		j++;
	}
}

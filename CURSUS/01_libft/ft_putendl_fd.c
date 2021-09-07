/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:20:09 by iarribas          #+#    #+#             */
/*   Updated: 2021/06/10 19:42:03 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	write(fd, "\n", 1);
}

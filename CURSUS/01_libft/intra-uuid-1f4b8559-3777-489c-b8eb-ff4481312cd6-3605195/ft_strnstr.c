/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 19:25:04 by iarribas          #+#    #+#             */
/*   Updated: 2021/06/02 20:08:42 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	int		err;

	i = -1;
	while (haystack[++i] != '\0' && i < len)
	{
		j = -1;
		err = -2;
		while (needle[++j] != '\0')
		{
			err = 0;
			if (haystack[i + j] != needle[j] || (i + j) >= len)
			{
				err = -1;
				break ;
			}
		}
		if (err == 0)
			return ((char *)(haystack + i));
	}
	if (err != -2 && ft_strlen(needle) != 0)
		return (0);
	return ((char *)(haystack));
}

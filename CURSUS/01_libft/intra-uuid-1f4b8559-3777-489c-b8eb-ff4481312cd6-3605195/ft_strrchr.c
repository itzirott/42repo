/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 20:04:05 by iarribas          #+#    #+#             */
/*   Updated: 2021/06/02 20:24:49 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;

	j = -1;
	i = 0;
	while (s[i] != '\0')
	{
		if (c == s[i])
			j = i;
		i++;
	}
	if (s[i] == '\0')
	{
		if (c == s[i])
			return ((char *)&(s[i]));
	}
	if (j == -1)
		return (0);
	return ((char *)&(s[j]));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:43:22 by iarribas          #+#    #+#             */
/*   Updated: 2021/06/08 20:20:43 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_find (char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	i = 0;
	while (i < ft_strlen(s1) && ft_find(s1[start], set))
	{
		start++;
		i++;
	}
	while (end && ft_find(s1[end], set))
		end--;
	if (end < start)
		str = ft_strdup("");
	else
		str = ft_substr(s1, start, end - start + 1);
	return (str);
}

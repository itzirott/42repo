/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarribas <iarribas@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 12:32:12 by iarribas          #+#    #+#             */
/*   Updated: 2021/06/07 15:57:14 by iarribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen (s2);
	ptr = (char *) malloc (sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}

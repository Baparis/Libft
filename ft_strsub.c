/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:27:17 by baparis           #+#    #+#             */
/*   Updated: 2016/11/16 18:05:46 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	if (start > ft_strlen(s))
		return (0);
	if ((dest = (char*)malloc(sizeof(char) * len + 1)))
	{
		while (i < len && s[start])
			dest[i++] = s[start++];
		dest[i] = '\0';
		return (dest);
	}
	return (0);
}

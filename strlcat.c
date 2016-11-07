/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:18:42 by baparis           #+#    #+#             */
/*   Updated: 2016/11/07 17:40:29 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned long int	i;
	int					j;
	int					count;

	i = 0;
	j = 0;
	count = ft_strlen(dest);
	n = n - count - 1;
	while (dest[i])
		i++;
	while (i < n && src[j])
		dest[i++] = src[j++];
	if (i > n)
		dest[i] = '\0';
	j = ft_strlen(src);
	return (j);
}

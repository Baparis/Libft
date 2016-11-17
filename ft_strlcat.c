/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:18:42 by baparis           #+#    #+#             */
/*   Updated: 2016/11/14 14:26:19 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	unsigned long int	i;
	int					j;
	unsigned long int	count;

	i = 0;
	j = 0;
	count = ft_strlen(dest);
	while (i < n && dest[i])
		i++;
	count = i;
	while (src[j] && i < n - 1)
		dest[i++] = src[j++];
	if (count < n)
		dest[i] = '\0';
	return (count + ft_strlen(src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:13:08 by baparis           #+#    #+#             */
/*   Updated: 2016/11/07 11:36:31 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned int	i;

	i = 0;
	tmp = (unsigned char*)malloc(sizeof(unsigned char) * (n + 1));
	if (n < 1)
		return (0);
	while (n--)
		tmp[i++] = *(unsigned char*)src++;
	tmp[i] = '\n';
	while (n++ < i)
		*(unsigned char*)dest++ = (unsigned char)tmp++;
	free(tmp);
	return (dest);
}

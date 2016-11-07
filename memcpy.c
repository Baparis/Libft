/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:36:20 by baparis           #+#    #+#             */
/*   Updated: 2016/11/07 11:25:08 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;

	if (n < 1)
		return (0);
	tmp = (unsigned char*)dest;
	while (n--)
	{
		*tmp = *(unsigned char*)src;
		src++;
		tmp++;
	}
	return (dest);
}

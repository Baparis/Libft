/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:00:25 by baparis           #+#    #+#             */
/*   Updated: 2016/11/16 13:51:30 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t n)
{
	void				*dest;
	unsigned long int	i;

	i = 0;
	if ((dest = (void*)malloc(sizeof(void) * n)))
	{
		while (i < n)
			((unsigned int*)dest)[i++] = 0;
		return (dest);
	}
	return (0);
}

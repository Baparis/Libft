/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:13:45 by baparis           #+#    #+#             */
/*   Updated: 2016/11/07 15:33:41 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = -1;
	if (ft_strlen(src) == 0)
		return (dest);
	dest = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

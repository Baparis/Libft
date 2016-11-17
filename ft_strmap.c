/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:43:22 by baparis           #+#    #+#             */
/*   Updated: 2016/11/16 17:20:40 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tmp;
	int		i;

	i = -1;
	if (s == NULL)
		return (0);
	if ((tmp = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)) && *s)
	{
		while (s[++i])
			tmp[i] = f(s[i]);
		tmp[i] = '\0';
		return (tmp);
	}
	return (0);
}

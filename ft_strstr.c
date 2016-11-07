/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:04:33 by baparis           #+#    #+#             */
/*   Updated: 2016/11/07 18:38:39 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *src, const char *find)
{
	int		i;
	int		j;
	char	*tmp;
	int		m;

	j = 0;
	i = 0;
	tmp = (char*)src;
	while (tmp[i])
	{
		m = i;
		while (tmp[i] == find[j])
		{
			j++;
			i++;
		}
		if (find[j] == '\0')
			return (tmp + m);
		i = m;
		i++;
		j = 0;
	}
	return (0);
}

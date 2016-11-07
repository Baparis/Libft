/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:38:53 by baparis           #+#    #+#             */
/*   Updated: 2016/11/07 19:02:47 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *find, size_t len)
{
	int		i;
	int		j;
	char	*tmp;
	int		m;

	j = 0;
	i = 0;
	tmp = (char*)src;
	while (tmp[i] && len--)
	{
		m = i;
		while (tmp[i] == find[j] && len)
		{
			len--;
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


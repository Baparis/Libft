/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:36:50 by baparis           #+#    #+#             */
/*   Updated: 2016/11/16 18:07:52 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wordcount(char *s, char c)
{
	int	count;
	int i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i])
				i++;
		}
		else
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	count++;
	return (count);
}

static int		p(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	i++;
	return (i);
}

static char		*ft_setstr(char *s1, char c)
{
	int		i;
	char	*tmp;

	i = 0;
	if (!(tmp = (char*)malloc(sizeof(char) * p(s1, c))))
		return (0);
	while (s1[i] && s1[i] != c)
	{
		tmp[i] = s1[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**dest;
	int		j;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (!(dest = (char**)malloc(sizeof(char*) * ft_wordcount((char*)s, c))))
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!(dest[j] = (char*)malloc(sizeof(char) * p((char*)s + i, c))))
				return (0);
			dest[j++] = ft_setstr((char*)s + i, c);
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	dest[j] = 0;
	return (dest);
}

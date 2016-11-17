/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:45:37 by baparis           #+#    #+#             */
/*   Updated: 2016/11/14 17:11:24 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long int n, int *wt)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len = 1;
		n = -n;
	}
	*wt = 1;
	while (n / *wt > 9)
	{
		*wt = *wt * 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int			len;
	int			wt;
	int			cur;
	char		*dest;
	long int	tmp;

	tmp = n;
	len = ft_len(tmp, &wt);
	if (!(dest = (char*)malloc(sizeof(char) * len + 2)))
		return (0);
	cur = 0;
	if (tmp < 0)
	{
		dest[cur++] = '-';
		tmp = -tmp;
	}
	while (wt >= 1)
	{
		dest[cur++] = (tmp / wt % 10) + '0';
		wt = wt / 10;
	}
	dest[cur] = '\0';
	return (dest);
}

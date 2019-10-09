/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerkert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 10:00:09 by bmerkert          #+#    #+#             */
/*   Updated: 2019/09/30 18:05:50 by bmerkert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_counter(int n)
{
	size_t i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	size_t			len;
	char			*res;
	int				dub;
	unsigned int	i;

	dub = n;
	len = ft_counter(n);
	if (n < 0)
		n = -n;
	i = (unsigned int)n;
	if (!(res = ft_strnew(len)))
		return (NULL);
	while (len--)
	{
		res[len] = i % 10 + '0';
		i = i / 10;
	}
	if (dub < 0)
		res[0] = '-';
	return (res);
}

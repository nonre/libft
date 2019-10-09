/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerkert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 14:01:28 by bmerkert          #+#    #+#             */
/*   Updated: 2019/09/30 18:06:11 by bmerkert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *pt;

	pt = (unsigned char *)s;
	while (n--)
	{
		if (*pt == (unsigned char)c)
			return ((void *)pt);
		pt++;
	}
	return (NULL);
}

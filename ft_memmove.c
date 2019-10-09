/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerkert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 11:37:39 by bmerkert          #+#    #+#             */
/*   Updated: 2019/09/30 18:06:17 by bmerkert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *ptd;
	char *pts;

	ptd = (char *)dest;
	pts = (char *)src;
	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		ptd += n;
		pts += n;
		while (n--)
			*--ptd = *--pts;
	}
	else
	{
		while (n--)
			*ptd++ = *pts++;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerkert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 01:37:34 by bmerkert          #+#    #+#             */
/*   Updated: 2019/09/30 18:06:14 by bmerkert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *ptr_d;
	char *ptr_s;

	ptr_d = (char *)dest;
	ptr_s = (char *)src;
	if (!dest && !src)
		return (0);
	while (n > 0)
	{
		*(ptr_d++) = *(ptr_s++);
		n--;
	}
	return (dest);
}

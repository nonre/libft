/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerkert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:20:18 by bmerkert          #+#    #+#             */
/*   Updated: 2019/09/30 18:06:52 by bmerkert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *arr;
	char *res;

	if (!(arr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	res = arr;
	while (*s)
		*arr++ = *s++;
	*arr = '\0';
	return (res);
}

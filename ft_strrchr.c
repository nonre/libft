/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerkert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 07:52:49 by bmerkert          #+#    #+#             */
/*   Updated: 2019/09/30 18:07:29 by bmerkert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *save;

	save = NULL;
	if (c == '\0')
		return (ft_strchr(s, '\0'));
	while (*s)
	{
		if (*s == c)
			save = (char *)s;
		s++;
	}
	return (save);
}

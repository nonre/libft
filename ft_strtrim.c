/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerkert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 23:20:08 by bmerkert          #+#    #+#             */
/*   Updated: 2019/09/30 19:49:36 by bmerkert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(char const *s)
{
	size_t	len;
	char	*res;

	if (!s)
		return (0);
	len = ft_strlen(s);
	while (ft_isspace(*s))
	{
		++s;
		--len;
	}
	if (len)
	{
		while (ft_isspace(s[len - 1]))
			--len;
	}
	if (!(res = (char *)malloc(len + 1)))
		return (NULL);
	ft_strncpy(res, s, len);
	res[len] = '\0';
	return (res);
}

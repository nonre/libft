/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmerkert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 06:51:31 by bmerkert          #+#    #+#             */
/*   Updated: 2019/09/30 18:07:31 by bmerkert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_wordcounter(const char *s, char c)
{
	size_t i;

	i = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			i++;
		s++;
	}
	return (i);
}

static char			**ft_splitter(char **arr, const char *s, char c, size_t n)
{
	size_t	i;
	size_t	length;

	i = 0;
	while (i < n)
	{
		while (*s == c)
			s++;
		length = 0;
		while (s[length] != '\0' && s[length] != c)
			length++;
		if (!(arr[i] = ft_strsub(s, 0, length)))
			return (NULL);
		s += length;
		i++;
	}
	return (arr);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_wordcounter(s, c);
	if (!(arr = ft_memalloc(sizeof(char*) * (words + 1))))
		return (NULL);
	if (!(arr = ft_splitter(arr, s, c, words)))
	{
		ft_memdel((void **)arr);
		return (NULL);
	}
	return (arr);
}

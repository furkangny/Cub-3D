/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:18:35 by fgunay            #+#    #+#             */
/*   Updated: 2024/05/15 18:18:36 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		len;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	result = malloc(sizeof(char *) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*s == c)
			s++;
		j = 0;
		while (s[j] != c && s[j])
			j++;
		result[i++] = ft_substr(s, 0, j);
		s += j;
	}
	result[i] = NULL;
	return (result);
}

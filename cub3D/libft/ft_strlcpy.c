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

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	x;
	char			*dest;
	char			*source;

	x = ft_strlen(src);
	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (dstsize != 0)
	{
		while (source [i] != '\0' && i < dstsize - 1)
		{
			dest[i] = source[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}

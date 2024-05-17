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

char	*ft_strchr(const char *s, int c)
{
	unsigned char	d;
	unsigned char	*m;
	size_t			i;

	d = c;
	i = 0;
	m = (unsigned char *)s;
	while (i != (ft_strlen((char *)m) + 1) && m)
	{
		if (s[i] == d)
			return ((char *)(s + (i * sizeof(char))));
		else
			i++;
	}
	return (NULL);
}

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

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*d;
	char	*m;

	i = 0;
	m = (char *)s1;
	d = (char *)malloc(sizeof(char) * ft_strlen(m) + 1);
	if (!d)
		return (0);
	while (m[i])
	{
		d[i] = m[i];
		i++;
	}
	d[i] = 0;
	return (d);
}

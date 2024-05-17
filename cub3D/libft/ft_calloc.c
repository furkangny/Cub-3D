/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:16:40 by fgunay            #+#    #+#             */
/*   Updated: 2024/05/15 18:16:42 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char		*d;
	size_t		i;

	i = 0;
	d = (char *)malloc(size * count);
	if (!d)
		return (0);
	while (i < size * count)
	{
		d[i] = '\0';
		i++;
	}
	return (d);
}

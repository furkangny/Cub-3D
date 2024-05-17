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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*buffer;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	buffer = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&buffer, del);
			return (NULL);
		}
		ft_lstadd_back(&buffer, temp);
		temp = temp->next;
		lst = lst->next;
	}
	return (buffer);
}

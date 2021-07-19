/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 20:16:01 by shaas             #+#    #+#             */
/*   Updated: 2021/07/19 19:48:16 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_curr;
	t_list	*curr;

	if (f != NULL && del != NULL && lst != NULL)
	{
		new_lst = ft_lstnew(f(lst->content));
		if (new_lst == NULL)
			return (NULL);
		curr = lst->next;
		while (curr != NULL)
		{
			new_curr = ft_lstnew(f(curr->content));
			if (new_curr == NULL)
			{
				ft_lstclear(&new_lst, del);
				return (NULL);
			}
			ft_lstadd_back(&new_lst, new_curr);
			curr = curr->next;
		}
	}
	else
		return (NULL);
	return (new_lst);
}

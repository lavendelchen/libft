/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 20:15:09 by shaas             #+#    #+#             */
/*   Updated: 2021/07/19 19:51:53 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*curr2;

	if (del != NULL)
	{
		curr = *lst;
		while (curr != NULL)
		{
			curr2 = curr->next;
			ft_lstdelone(curr, del);
			curr = curr2;
		}
		*lst = NULL;
	}
}

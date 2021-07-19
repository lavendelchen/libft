/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 20:15:09 by shaas             #+#    #+#             */
/*   Updated: 2021/07/14 20:18:45 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr; // do i need protection against null or is it chill?. -> nope, i don't. it handels the case that teh list is empty (in which it does nothing)
	t_list	*curr2; // do i need this? -> ye!!

	if (del != NULL)
	{
		curr = *lst;
		while (curr != NULL) // condition still accurate? -> yes.
		{
			curr2 = curr->next;
			ft_lstdelone(curr, del);
			curr = curr2;
		}
		*lst = NULL; // you basically always use this, with the star. the adress i never really used.
	}
}

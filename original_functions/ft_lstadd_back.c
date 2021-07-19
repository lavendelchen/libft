/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 20:14:53 by shaas             #+#    #+#             */
/*   Updated: 2021/07/19 19:50:20 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new != NULL)
	{
		last = ft_lstlast(*lst);
		if (last == NULL) // if there is no last element bc the list is empty
			ft_lstadd_front(lst, new);
		else
			last->next = new;
	}
}

//int	main(void)
//{
//	t_list	*head;
//	t_list	*tail;
//	int val = 10;
//	int val1 = 25;
//	int val2 = 5;
//
//	head = (t_list *)malloc(sizeof(t_list)); // head
//	if (head == NULL)
//		return (0);
//	head->content = &val;
//	head->next = NULL;
//
//	tail = (t_list *)malloc(sizeof(t_list)); // tail
//	if (tail == NULL)
//		return(0);
//	tail->content = &val1;
//	tail->next = NULL;
//	head->next = tail;
//
//	t_list	*new;
//	new = (t_list *)malloc(sizeof(t_list)); // new
//	if (new == NULL)
//		return (0);
//	new->content = &val2;
//	new->next = NULL;
//
//	ft_lstadd_back(&head, new); // the magic (new gets to end of list)
//
//	t_list *curr;
//	curr = head;
//	while (curr != NULL)
//	{
//		printf("%d\n", *((int *)curr->content)); // print list
//		curr = curr->next;
//	}
//
//	free (head); // free nodes
//	free (tail);
//	free (new);
//	return (0);
//}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 20:12:36 by shaas             #+#    #+#             */
/*   Updated: 2021/07/14 19:04:58 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
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
//	ft_lstadd_front(&head, new); // the magic (new gets to start of list)
//
//	t_list *curr;
//	curr = new;
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

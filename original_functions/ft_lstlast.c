/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 20:15:47 by shaas             #+#    #+#             */
/*   Updated: 2021/07/14 18:35:30 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*curr;

	curr = lst;
	if (curr == NULL)
		return (curr);
	while (curr->next != NULL)
		curr = curr->next;
	return (curr);
}

//int	main(void)
//{
//	t_list	*head;
//	t_list	*tail;
//	t_list	*curr;
//	int val = 10;
//	int val1 = 30;
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
//	curr = ft_lstlast(head); // the magic (returns last element of list)
//
//	printf("%d\n", *((int *)curr->content)); // print last element
//
//	free (head); // free nodes
//	free (tail);
//	return (0);
//}

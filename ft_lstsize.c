/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 20:16:15 by laven             #+#    #+#             */
/*   Updated: 2021/07/13 18:14:47 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*curr;
	int		count;

	curr = lst;
	count = 0;
	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}
	return (count);
}

int	main(void)
{
	t_list	*head;
	t_list	*tail;
	int val = 10;
	int val1 = 25;

	head = (t_list *)malloc(sizeof(t_list)); // head
	if (head == NULL)
		return (0);
	head->content = &val;
	head->next = NULL;

	tail = (t_list *)malloc(sizeof(t_list)); // tail
	if (tail == NULL)
		return(0);
	tail->content = &val1;
	tail->next = NULL;
	head->next = tail;

	int	size;
	size = ft_lstsize(head); // the magic (find out size)

	printf("list size: %d", size);

	free (head); // free nodes
	free (tail);
	return (0);
}

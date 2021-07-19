/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_learning.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:07:38 by shaas             #+#    #+#             */
/*   Updated: 2021/07/19 20:07:03 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int	main(void)
{
	t_list	*head;
	t_list	*tail;
	int val = 10;
	int val1 = 25;

	head = (t_list *)malloc(sizeof(t_list));
	if (head == NULL)
		return (0);
	head->content = &val;
	head->next = NULL;

	tail = (t_list *)malloc(sizeof(t_list));
	if (tail == NULL)
		return(0);
	tail->content = &val1;
	tail->next = NULL;
	head->next = tail;

	t_list *curr;
	curr = head;
	while (curr != NULL)
	{
		printf("%d\n", *((int *)curr->content));
		curr = curr->next;
	}
	free(head);
}

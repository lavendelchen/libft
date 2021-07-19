/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 20:16:01 by shaas             #+#    #+#             */
/*   Updated: 2021/07/19 19:47:55 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//typedef struct s_list
//{
//	void			*content;
//	struct s_list	*next;
//}				t_list;
//
//void	ft_lstdelone(t_list *lst, void (*del)(void *))
//{
//	if (lst != NULL && del != NULL)
//	{
//		del(lst->content);
//		free(lst);
//	}
//}
//
//void	ft_lstclear(t_list **lst, void (*del)(void*))
//{
//	t_list	*curr; // do i need protection against null or is it chill?. -> nope, i don't. it handels the case that teh list is empty (in which it does nothing)
//	t_list	*curr2; // do i need this? -> ye!!
//
//	if (del != NULL)
//	{
//		curr = *lst;
//		while (curr != NULL) // condition still accurate? -> yes.
//		{
//			curr2 = curr->next;
//			ft_lstdelone(curr, del);
//			curr = curr2;
//		}
//		*lst = NULL; // you basically always use this, with the star. the adress i never really used.
//	}
//}
//
//t_list	*ft_lstlast(t_list *lst)
//{
//	t_list	*curr;
//
//	curr = lst;
//	if (curr == NULL)
//		return (curr);
//	while (curr->next != NULL)
//		curr = curr->next;
//	return (curr);
//}
//
//
//t_list	*ft_lstnew(void *content)
//{
//	t_list	*new;
//
//	new = (t_list *)malloc(sizeof(t_list));
//	if (new == NULL)
//		return (NULL);
//	new->content = content;
//	new->next = NULL;
//	return (new);
//}
//
//void	ft_lstadd_front(t_list **lst, t_list *new)
//{
//	if (new != NULL)
//	{
//		new->next = *lst;
//		*lst = new;
//	}
//}
//
//void	ft_lstadd_back(t_list **lst, t_list *new)
//{
//	t_list	*last;
//
//	if (new != NULL)
//	{
//		last = ft_lstlast(*lst);
//		if (last == NULL) // if there is no last element bc the list is empty
//			ft_lstadd_front(lst, new);
//		else
//			last->next = new;
//	}
//}
//
//void	*func(void *content)
//{
//	*(int *)content = *(int *)content + 1;
//	return (content);
//}
//
//void	delete(void *element)
//{
//	*(int *)element = 0;
//}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *)) // this bITCH put a null pointer as del n thats why it didnt work. cause i PORTECTED AGAINST IT. swear these bitches
{
	t_list	*new_lst;
	t_list	*new_curr;
	t_list	*curr;

	if (f != NULL && del != NULL && lst != NULL) // dont know why this doesnt work.
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
//	ft_lstadd_back(&head, new); // new gets to end of l (so: head -> tail -> new)
//
//	void *(*f)(void *) = &func; // this part creates a new list with changed values
//	void (*del)(void *) = &delete;
//	t_list *curr = ft_lstmap(head, f, del);
//
//	while (curr != NULL)
//	{
//		printf("%d\n", *((int *)curr->content)); // print new list
//		curr = curr->next;
//	}
//
//	free (head); // free nodes
//	free (tail);
//	free (new);
//	free (curr);
//	return (0);
//}

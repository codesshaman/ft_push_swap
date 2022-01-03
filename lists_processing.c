/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_processing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 13:52:59 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 15:04:59 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Создание списка

t_lst	*create_list(void)
{
	t_lst	*list;

	list = (t_lst *) malloc(sizeof(t_lst));
	if (list == NULL)
		return (NULL);
	list->first = NULL;
	list->last = NULL;
	list->size = 0;
	return (list);
}

// Очистка списка

void	clear_list(t_lst *list, void (*del)(void*))
{
	t_node	*current;
	t_node	*buff;

	if (list != NULL && del != NULL)
	{
		current = list->first;
		while (current != NULL)
		{
			buff = current->next;
			delete_list(list, current, del);
			current = buff;
		}
		free(list);
	}
}

// Удаление списка

void	delete_list(t_lst *list, t_node *node, void (*del)(void*))
{
	if (node != NULL)
	{
		del(node->content);
		free(node);
		list->size--;
	}
}

// Добавление элемента в начало списка

void	list_add_front(t_lst *list, void *content)
{
	t_node	*head;
	t_node	*last;
	t_node	*node;

	head = list->first;
	node = list_create_node(content);
	if (head == NULL)
		list->first = node;
	else
	{
		last = list->last;
		if (last == NULL)
			last = head;
		node->next = head;
		head->prev = node;
		list->first = node;
		list->last = last;
	}
	list->size++;
}

// Добавление элемента в конец списка

void	list_add_back(t_lst *list, void *content)
{
	t_node	*head;
	t_node	*node;

	node = list_create_node(content);
	head = list->first;
	if (head == NULL)
		list->first = node;
	else
	{
		if (list->last == NULL)
			list->last = head;
		list->last->next = node;
		list->last = node;
		node->prev = list->last;
	}
	list->size++;
}

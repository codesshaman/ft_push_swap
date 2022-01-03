/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_processing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 21:09:31 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 12:42:14 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Инициализация стека

t_stack	stack_init(void)
{
	t_stack	stack;

	stack.a = create_list();
	stack.b = create_list();
	return (stack);
}

// Нормализация стека

void	stack_norm(t_lst	*stack)
{
	t_node	*current;
	t_index	copy;
	int		index;
	int		*value;

	copy = stack_indexing(stack);
	sort_by_index(&copy);
	current = stack->first;
	while (current != NULL)
	{
		index = find_index(&copy, *((int *) current->content));
		value = malloc(sizeof(int));
		*value = index;
		free(current->content);
		current->content = value;
		current = current->next;
	}
	free(copy.pointer);
}

// Создание ноды

t_node	*list_create_node(void *content)
{
	t_node	*node;

	node = (t_node *) malloc(sizeof(t_node));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

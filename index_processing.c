/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_processing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 16:15:02 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 12:39:34 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Преобразование стека в индексный список

t_index	stack_indexing(t_lst *stack)
{
	t_node	*current;
	t_index	index;
	size_t	i;

	i = 0;
	index.pointer = (int *) malloc(stack->size * sizeof(int));
	index.size = stack->size;
	current = stack->first;
	while (current != NULL)
	{
		index.pointer[i++] = *((int *) current->content);
		current = current->next;
	}
	return (index);
}

void	sort_by_index(t_index *index)
{
	int		current;
	int		buff;
	int		min;
	int		i;

	current = 0;
	while (current < index->size)
	{
		i = current;
		min = i;
		while (i < index->size)
		{
			if (index->pointer[i] < index->pointer[min])
				min = i;
			i++;
		}
		buff = index->pointer[current];
		index->pointer[current] = index->pointer[min];
		index->pointer[min] = buff;
		current++;
	}
}

int	find_index(t_index *index, int value)
{
	int	i;

	i = 0;
	while (i < index->size)
	{
		if (index->pointer[i] == value)
			return (i);
		i++;
	}
	return (0);
}

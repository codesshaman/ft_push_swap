/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:12:53 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/02 21:25:57 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrb(t_stack *stack)
{
	t_node	*prev;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) stack->b->last->content);
	prev = stack->b->last->prev;
	prev->next = NULL;
	list_add_front(stack->b, tmp);
	delete_list(stack->b, stack->b->last, free);
	stack->b->last = prev;
	ft_putstr_fd("rrb\n", 1);
}

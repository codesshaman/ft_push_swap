/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:12:53 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 16:20:37 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_stack *stack)
{
	t_node	*prev;
	int		*buff;

	if (!stack || !stack->b)
		return ;
	buff = malloc(sizeof(int));
	*buff = *((int *) stack->b->last->content);
	prev = stack->b->last->prev;
	prev->next = NULL;
	list_add_front(stack->b, buff);
	delete_list(stack->b, stack->b->last, free);
	stack->b->last = prev;
	ft_putstr_fd("rrb\n", 1);
}

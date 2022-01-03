/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:12:49 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 16:20:15 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *stack)
{
	t_node	*node;
	int		*buff;

	if (!stack || !stack->a)
		return ;
	buff = malloc(sizeof(int));
	*buff = *((int *) stack->a->last->content);
	node = stack->a->last->prev;
	node->next = NULL;
	stack->a->last = node;
	list_add_front(stack->a, buff);
	ft_putstr_fd("rra\n", 1);
}

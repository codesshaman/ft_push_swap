/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:12:57 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 14:35:53 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr(t_stack *stack)
{
	t_node	*preva;
	t_node	*prevb;
	int		*buffa;
	int		*buffb;

	buffa = malloc(sizeof(int));
	buffb = malloc(sizeof(int));
	*buffa = *((int *) stack->a->last->content);
	*buffb = *((int *) stack->b->last->content);
	preva = stack->a->last->prev;
	prevb = stack->b->last->prev;
	preva->next = NULL;
	prevb->next = NULL;
	list_add_front(stack->a, buffa);
	list_add_front(stack->b, buffb);
	delete_list(stack->a, stack->a->last, free);
	delete_list(stack->b, stack->b->last, free);
	stack->a->last = preva;
	stack->b->last = prevb;
	ft_putstr_fd("rrr\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:12:43 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 14:35:42 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_stack *stack)
{
	t_node	*nexta;
	t_node	*nextb;
	int		*buffa;
	int		*buffb;

	buffa = (int *) malloc(sizeof(int));
	buffb = (int *) malloc(sizeof(int));
	*buffa = *((int *) stack->a->first->content);
	*buffb = *((int *) stack->b->first->content);
	nexta = stack->a->first->next;
	nextb = stack->b->first->next;
	list_add_back(stack->a, &buffa);
	list_add_back(stack->b, &buffb);
	delete_list(stack->a, stack->a->first, free);
	delete_list(stack->b, stack->b->first, free);
	stack->a->first = nexta;
	stack->b->first = nextb;
	ft_putstr_fd("rr\n", 1);
}

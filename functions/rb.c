/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:12:40 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 16:43:25 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	null(void *nul)
{
	(void) nul;
}

void	rb(t_stack *stack)
{
	t_node	*next;
	int		*buff;

	if (!stack || !stack->b)
		return ;
	buff = malloc(sizeof(int));
	*buff = *((int *) stack->b->first->content);
	next = stack->b->first->next;
	list_add_back(stack->b, buff);
	delete_list(stack->b, stack->b->first, null);
	stack->b->first = next;
	ft_putstr_fd("rb\n", 1);
}

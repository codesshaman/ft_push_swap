/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:12:35 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 14:35:26 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *stack)
{
	t_node	*next;
	int		*buff;

	buff = malloc(sizeof(int));
	*buff = *((int *) stack->a->first->content);
	next = stack->a->first->next;
	list_add_back(stack->a, buff);
	delete_list(stack->a, stack->a->first, free);
	stack->a->first = next;
	ft_putstr_fd("ra\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:12:31 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 16:17:47 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack *stack)
{
	t_node	*list;
	int		*buff;

	if (!stack->a)
		return ;
	buff = malloc(sizeof(int));
	*buff = *((int *) stack->a->first->content);
	list_add_front(stack->b, buff);
	list = stack->a->first->next;
	delete_list(stack->a, stack->a->first, free);
	stack->a->first = list;
	ft_putstr_fd("pb\n", 1);
}

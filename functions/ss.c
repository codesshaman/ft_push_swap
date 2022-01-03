/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:13:08 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 14:36:01 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_stack *stack)
{
	t_lst	*a;
	t_lst	*b;
	int		buffa;
	int		buffb;

	a = stack->a;
	b = stack->b;
	buffa = *((int *) a->first->next->content);
	buffb = *((int *) b->first->next->content);
	*((int *) a->first->next->content) = *((int *) a->first->content);
	*((int *) b->first->next->content) = *((int *) b->first->content);
	*((int *) a->first->content) = buffa;
	*((int *) b->first->content) = buffb;
	ft_putstr_fd("ss\n", 1);
}

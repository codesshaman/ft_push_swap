/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:13:08 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/02 21:13:10 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ss(t_stack *stack)
{
	t_lst	*a;
	t_lst	*b;
	int		tmpa;
	int		tmpb;

	a = stack->a;
	b = stack->b;
	tmpa = *((int *) a->first->next->content);
	tmpb = *((int *) b->first->next->content);
	*((int *) a->first->next->content) = *((int *) a->first->content);
	*((int *) b->first->next->content) = *((int *) b->first->content);
	*((int *) a->first->content) = tmpa;
	*((int *) b->first->content) = tmpb;
	ft_putstr_fd("ss\n", 1);
}

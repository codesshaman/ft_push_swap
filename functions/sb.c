/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:13:04 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 16:01:48 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_stack *stack)
{
	t_lst	*b;
	int		buff;

	if (!stack || !stack->b)
		return ;
	b = stack->b;
	buff = *((int *) b->first->next->content);
	*((int *) b->first->next->content) = *((int *) b->first->content);
	*((int *) b->first->content) = buff;
	ft_putstr_fd("sb\n", 1);
}

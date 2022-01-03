/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:13:04 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/02 21:13:06 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sb(t_stack *stack)
{
	t_lst	*b;
	int		tmp;

	b = stack->b;
	tmp = *((int *) b->first->next->content);
	*((int *) b->first->next->content) = *((int *) b->first->content);
	*((int *) b->first->content) = tmp;
	ft_putstr_fd("sb\n", 1);
}

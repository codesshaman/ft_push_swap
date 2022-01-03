/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:13:01 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 14:35:55 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *stack)
{
	t_lst	*a;
	int		buff;

	a = stack->a;
	buff = *((int *) a->first->next->content);
	*((int *) a->first->next->content) = *((int *) a->first->content);
	*((int *) a->first->content) = buff;
	ft_putstr_fd("sa\n", 1);
}

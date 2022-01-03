/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 13:53:46 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 12:45:48 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stacks;
	t_index	index;

	stacks = args_parser(ac, av);
	index = stack_indexing(stacks.a);
	if (dup_checker(&index))
	{
		if (!sort_checker(&index))
		{
			stack_norm(stacks.a);
			if (stacks.a->size > 5)
				sort_big_stack(&stacks);
			else
				sort_small_stack(&stacks);
		}
	}
	else
		put_error("Duplicate error!\n");
	free(index.pointer);
	clear_list(stacks.a, free);
	clear_list(stacks.b, free);
	return (0);
}

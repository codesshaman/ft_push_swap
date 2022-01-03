/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 13:19:49 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 12:08:06 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	arr_parser(t_stack *stacks, int ac, char **av, int start)
{
	size_t	i;
	int		*tmp;

	i = start;
	while (i < (size_t) ac)
	{
		if (!int_checker(av[i]))
		{
			put_error("Input error!\n");
			exit(1);
		}
		tmp = malloc(sizeof(int));
		*tmp = ft_atoi(av[i]);
		list_add_back(stacks->a, tmp);
		i++;
	}
}

static void	words_parser(t_stack *stacks, char *arg)
{
	char	**words;
	size_t	i;

	words = ft_split(arg, ' ');
	i = 0;
	while (words[i] != NULL)
		i++;
	arr_parser(stacks, i, words, 0);
	i = 0;
	while (words[i] != NULL)
		free(words[i++]);
	free(words);
}

t_stack	args_parser(int ac, char **av)
{
	t_stack	stacks;

	stacks = stack_init();
	if (ac == 2 && !int_checker(av[1]))
		words_parser(&stacks, av[1]);
	else
		arr_parser(&stacks, ac, av, 1);
	return (stacks);
}

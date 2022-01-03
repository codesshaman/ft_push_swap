/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 13:38:42 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 12:24:50 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Проверка на дубликаты

int	dup_checker(t_index *index)
{
	int		i;
	int		j;

	i = 0;
	while (i < index->size)
	{
		j = i + 1;
		while (j < index->size)
		{
			if (index->pointer[i] == index->pointer[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

// Проверка на пробелы

int	space_checker(int c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\n' || c == '\f' || c == '\r')
		return 1;
	return 0;
}

// Проверка на отсортированность

int	sort_checker(t_index *index)
{
	int	i;

	i = 0;
	while (i + 1 < index->size)
	{
		if (index->pointer[i] > index->pointer[i + 1])
			return (0);
		i++;
	}
	return (1);
}

// Проверка на целые числа

int	int_checker(const char *nptr)
{
	int				nbr;
	size_t			digits;
	size_t			i;

	i = 0;
	nbr = 0;
	digits = 0;
	while (space_checker(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		digits++;
		if ((nbr * 10 + (nptr[i] - '0')) / 10 != nbr)
			return (0);
		nbr = nbr * 10 + (nptr[i] - '0');
		i++;
	}
	return (!nptr[i] && digits);
}

// Функция вывода ошибки

int	put_error(char *str)
{
	ft_putstr_fd(str, 1);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleslee <jleslee@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 21:09:05 by jleslee           #+#    #+#             */
/*   Updated: 2022/01/03 15:10:51 by jleslee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

// Структура ноды
// (содержит значение)

typedef struct s_node
{
	void			*content;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

// Структура списка
// (содержит множ-во нод)

typedef struct s_lst
{
	struct s_node	*first;
	struct s_node	*last;
	unsigned int	size;
}	t_lst;

// Структура стека
// (содержит два списка)

typedef struct s_stack
{
	t_lst	*a;
	t_lst	*b;
}	t_stack;

// Структура для индексации
// (с указателями и размерами)

typedef struct s_index
{
	int		*pointer;
	int		size;
}	t_index;

// checker.c

int		int_checker(const char *nptr);
int		sort_checker(t_index *tab);
int		dup_checker(t_index *tab);
int		space_checker(int c);
int		put_error(char *str);

// lists_processing.c

t_lst	*create_list(void);
void	clear_list(t_lst *list, void (*del)(void*));
void	delete_list(t_lst *list, t_node *node, void (*del)(void*));
void	list_add_front(t_lst *list, void *content);
void	list_add_back(t_lst *list, void *content);

// parser.c

t_stack	args_parser(int argc, char **argv);

// stack_processing

t_stack	stack_init(void);
void	stack_norm(t_lst	*stack);
t_node	*list_create_node(void *content);


// stack_processing

t_index	stack_indexing(t_lst *stack);
int		find_index(t_index *index, int value);
void	sort_by_index(t_index *index);

void	sort_small_stack(t_stack *stacks);
void	sort_big_stack(t_stack *stacks);


void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
void	pb(t_stack *stack);
void	pa(t_stack *stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

int		ft_get_middle(t_index *index);
int		ft_is_sorted(t_index *index);

#endif

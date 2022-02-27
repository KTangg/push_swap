/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:29:15 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 13:29:15 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

# define STDERR 2

typedef struct s_int_array
{
	int	*i_array;
	size_t size;
}	t_stack;

int	valid_swap_input(size_t array_size, char **array, t_stack *a);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:07:54 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/28 14:07:54 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	swap_sort(t_stack **a, t_stack **b)
{
	size_t	size;

	size = stack_size(*a);
	if (size < 5)
		return (small_swap_sort(a, b, size));
}

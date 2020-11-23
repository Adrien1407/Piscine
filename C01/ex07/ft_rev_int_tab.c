/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 18:19:23 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/06 14:57:05 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = swap;
		i++;
	}
}

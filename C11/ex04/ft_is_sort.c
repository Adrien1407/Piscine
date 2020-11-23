/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 15:14:37 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/26 16:01:33 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int dir;

	i = 0;
	dir = 0;
	while (i < length - 1)
	{
		if (dir == 0)
			dir = f(tab[i], tab[i + 1]);
		else if (dir > 0 && (f(tab[i], tab[i + 1]) < 0))
			return (0);
		else if (dir < 0 && (f(tab[i], tab[i + 1]) > 0))
			return (0);
		i++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 13:43:07 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/19 12:00:00 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i++] = min++;
	}
	*range = tab;
	return (i);
}

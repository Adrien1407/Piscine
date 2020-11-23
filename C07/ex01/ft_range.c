/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 13:35:10 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/19 14:24:43 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (min < max)
	{
		tab[i++] = min++;
	}
	return (tab);
}

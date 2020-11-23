/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 19:05:23 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/05 19:05:29 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int n)
{
	int dizaine;
	int unite;

	dizaine = n / 10 + 48;
	unite = n % 10 + 48;
	write(1, &dizaine, 1);
	write(1, &unite, 1);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_numbers(i);
			write(1, " ", 1);
			ft_print_numbers(j);
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

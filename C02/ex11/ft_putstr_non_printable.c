/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 20:19:29 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/07 13:23:31 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	dec_to_hex(int nb)
{
	char *hexa;

	hexa = "0123456789abcdef";
	write(1, &hexa[nb / 16], 1);
	write(1, &hexa[nb % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32)
		{
			write(1, "\\", 1);
			dec_to_hex(str[i]);
		}
		write(1, &str[i], 1);
		i++;
	}
}

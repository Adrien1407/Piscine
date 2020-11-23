/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 21:44:55 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/15 12:48:41 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		checkbase(char *base)
{
	int i;
	int j;
	int baselength;

	baselength = ft_strlen(base);
	i = 0;
	if (baselength == 0 || baselength == 1)
		return (0);
	while (base[i])
	{
		if ((base[i]) == '-' || (base[i] == '+'))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;
	int			baselength;

	baselength = ft_strlen(base);
	nb = nbr;
	if (checkbase(base))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb >= baselength)
		{
			ft_putnbr_base((nb / baselength), base);
		}
		ft_putchar(base[nb % baselength]);
	}
}

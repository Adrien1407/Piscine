/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 11:27:34 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/26 16:02:30 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FONCTION_H
# define FT_FONCTION_H
# include <unistd.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int i;
	int atoi;
	int negative;

	i = 0;
	negative = 1;
	atoi = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative = (negative * -1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi = atoi * 10 + str[i] - 48;
		i++;
	}
	atoi = atoi * negative;
	return (atoi);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		nb = nb % 10 + 48;
		write(1, &nb, 1);
	}
}

int		ft_is_op(char c, char *sign)
{
	int i;

	i = 0;
	while (sign[i])
	{
		if (c == sign[i])
			return (1);
		i++;
	}
	return (0);
}

int		check_args(int ac, char **av, char *sign)
{
	int i;

	i = 0;
	if (ac != 4)
		return (1);
	if ((!ft_is_op(av[2][0], sign)) || (ft_strlen(av[2]) > 1))
	{
		write(1, "0\n", 2);
		return (1);
	}
	if (av[2][0] == '/' && ft_atoi(av[3]) == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (1);
	}
	if (av[2][0] == '%' && ft_atoi(av[3]) == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (1);
	}
	return (0);
}
#endif

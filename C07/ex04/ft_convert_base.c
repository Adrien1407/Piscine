/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 16:05:31 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/19 14:19:24 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
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

int		nb_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int atoi;
	int negative;

	i = 0;
	negative = 1;
	atoi = 0;
	if (checkbase(base))
	{
		while (((str[i] >= 9) && (str[i] <= 13)) || str[i] == ' ')
		{
			i++;
		}
		while (str[i] == '+' || str[i] == '-')
		{
			negative = (str[i] == '-') ? -negative : negative;
			i++;
		}
		while (str[i] && nb_in_base(str[i], base) != -1)
		{
			atoi = atoi * ft_strlen(base) + nb_in_base(str[i], base);
			i++;
		}
	}
	return (atoi * negative);
}

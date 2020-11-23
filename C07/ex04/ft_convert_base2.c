/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 16:05:43 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/19 14:19:30 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		checkbase(char *base);
int		nb_in_base(char c, char *base);
int		ft_atoi_base(char *str, char *base);

int		countnumbers(int nbr, char *base)
{
	int i;

	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr)
	{
		nbr = nbr / ft_strlen(base);
		i++;
	}
	return (i);
}

char	*itoa_base(int nb, char *base)
{
	char		*result;
	int			i;
	int			sign;
	int			baselength;
	long int	nbr;

	nbr = nb;
	baselength = ft_strlen(base);
	sign = 0;
	if (!(result = malloc(sizeof(char) * countnumbers(nbr, base) + 1)))
		return (NULL);
	i = countnumbers(nbr, base);
	result[i--] = '\0';
	if (nb < 0)
	{
		nbr = -nbr;
		result[0] = '-';
		sign++;
	}
	while (i >= sign)
	{
		result[i--] = base[nbr % baselength];
		nbr = nbr / baselength;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		temp;

	if (checkbase(base_to) && checkbase(base_from))
	{
		temp = ft_atoi_base(nbr, base_from);
		result = itoa_base(temp, base_to);
		return (result);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 09:07:21 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/20 19:19:51 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	if (!(copy = malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	if (!(tab = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		if (!(tab[i].str = malloc(sizeof(char) * ft_strlen(av[i] + 1))))
			return (NULL);
		tab[i].str = av[i];
		if (!(tab[i].copy = malloc(sizeof(char) * ft_strlen(av[i] + 1))))
			return (NULL);
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}

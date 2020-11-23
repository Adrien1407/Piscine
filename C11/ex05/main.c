/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 17:19:39 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/26 13:19:28 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_op.h"
#include "ft_fonction.h"

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	int		i;
	char	*sign;
	int		(*tabptrfn[5]) (int a, int b);

	tabptrfn[0] = ft_1;
	tabptrfn[1] = ft_2;
	tabptrfn[2] = ft_3;
	tabptrfn[3] = ft_4;
	tabptrfn[4] = ft_5;
	sign = "+-*%/";
	i = -1;
	if (check_args(argc, argv, sign))
		return (1);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	while (sign[++i])
		if (argv[2][0] == sign[i])
			break ;
	ft_putnbr(tabptrfn[i](a, b));
	write(1, "\n", 1);
	return (0);
}

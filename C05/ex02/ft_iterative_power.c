/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 10:58:59 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/11 10:44:34 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	result = 1;
	i = power;
	if (power < 0)
		return (0);
	while (i > 0)
	{
		result = result * nb;
		i--;
	}
	return (result);
}

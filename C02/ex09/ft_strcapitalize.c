/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 20:18:40 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/07 14:31:12 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		j = i - 1;
		if ((str[i] >= 'a' && str[i] <= 'z')
				&& !(str[j] >= 'a' && str[j] <= 'z')
				&& !(str[j] >= '0' && str[j] <= '9')
				&& !(str[j] >= 'A' && str[j] <= 'Z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

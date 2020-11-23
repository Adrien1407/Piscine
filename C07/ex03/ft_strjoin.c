/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 13:48:35 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/20 09:41:23 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_fill(int size, char **strs, char *sep, char *result)
{
	int	i;
	int	j;
	int l;

	j = -1;
	l = 0;
	while (++j < size)
	{
		i = -1;
		while (strs[j][++i])
			result[l++] = strs[j][i];
		if (j < size - 1)
		{
			i = -1;
			while (sep[++i])
				result[l++] = sep[i];
		}
	}
	result[l] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		length;
	int		i;

	length = 0;
	i = 0;
	while (i < size)
	{
		length = length + ft_strlen(strs[i]) + ft_strlen(sep) + 1;
		i++;
	}
	if (!(result = malloc(sizeof(char) * length)))
		return (NULL);
	if (size <= 0)
		return (result);
	result = ft_fill(size, strs, sep, result);
	return (result);
}

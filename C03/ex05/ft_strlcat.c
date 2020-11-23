/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 19:28:24 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/08 20:12:12 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int destlength;
	unsigned int j;
	unsigned int result;

	destlength = ft_strlen(dest);
	j = 0;
	result = ft_strlen(src);
	result = (size <= destlength) ? result + size : result + destlength;
	while (src[j] && (destlength + 1) < size)
	{
		dest[destlength++] = src[j++];
	}
	dest[destlength] = '\0';
	return (result);
}

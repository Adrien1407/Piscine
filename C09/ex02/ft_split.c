/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 17:18:57 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/24 10:27:08 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_in_c(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
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

char	*ft_strndup(char *src, int n)
{
	char	*copy;
	int		i;

	i = 0;
	if (!(copy = malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (src[i] && i < n)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int		countwords(char *str, char *charset)
{
	int i;
	int wordcount;

	wordcount = 0;
	i = 0;
	while (str[i])
	{
		while (is_in_c(str[i], charset))
			i++;
		if (!is_in_c(str[i], charset) && str[i])
			wordcount++;
		while (!is_in_c(str[i], charset) && str[i])
			i++;
	}
	return (wordcount);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		count;
	int		wordlength;

	count = countwords(str, charset);
	if (!(tab = malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < count)
	{
		while (str[j] && is_in_c(str[j], charset))
			j++;
		wordlength = 0;
		while (str[j + wordlength] && !is_in_c(str[j + wordlength], charset))
			wordlength++;
		tab[i] = ft_strndup(&str[j], wordlength);
		j += wordlength;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

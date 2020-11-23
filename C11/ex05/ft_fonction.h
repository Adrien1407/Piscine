/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 11:27:34 by adlancel          #+#    #+#             */
/*   Updated: 2020/08/26 12:14:48 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FONCTION_H
# define FT_FONCTION_H
# include <unistd.h>

int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_is_op(char c, char *sign);
int		check_args(int ac, char **av, char *sign);
#endif

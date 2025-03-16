/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iltellat <iltellat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:31:44 by iltellat          #+#    #+#             */
/*   Updated: 2025/03/16 15:04:35 by iltellat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <unistd.h>
# include <stdarg.h>

size_t	ft_strlen(const char *str);

int		ft_putchar(char c);
int		ft_putstr(const char *str);
int		ft_putnbr(int nb);
int		ft_putunbr(unsigned int nb);
int		ft_putnbr_base(size_t nbr, char *base);

#endif
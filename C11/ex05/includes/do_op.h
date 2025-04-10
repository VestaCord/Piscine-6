/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:07:47 by vtian             #+#    #+#             */
/*   Updated: 2025/04/10 18:11:16 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <stdio.h>
# include <unistd.h>

int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mod(int a, int b);
int		ft_div(int a, int b);
int		ft_mul(int a, int b);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukasaca <yukasaca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:03:32 by yukasaca          #+#    #+#             */
/*   Updated: 2026/02/16 14:02:27 by yukasaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINFT_H
# define FT_PRINFT_H

int	ft_print_d(int n);
int	ft_print_s(char *str);
int	ft_print_c(char str);
int	ft_print_u(unsigned int n);
int	ft_print_x(unsigned long number, char c);
int	ft_print_p(void *number);

#endif
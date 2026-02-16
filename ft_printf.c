/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukasaca <yukasaca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:03:37 by yukasaca          #+#    #+#             */
/*   Updated: 2026/02/16 18:14:02 by yukasaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_print_c(char str)
{
	return (write(1, &str, 1));
}

static int	ft_print_o(char c)
{
	int	count;

	count = 0;
	count += write(1, "%", 1);
	count += write(1, &c, 1);
	return (count);
}

static int	ft_checkher(char str, va_list args)
{
	if (str == 'c')
		return (ft_print_c(va_arg(args, int)));
	else if (str == 'u')
		return (ft_print_u(va_arg(args, unsigned int)));
	else if ((str == 'i') || (str == 'd'))
		return (ft_print_d(va_arg(args, int)));
	else if (str == 's')
		return (ft_print_s(va_arg(args, char *)));
	else if (str == 'x' || str == 'X')
		return (ft_print_x(va_arg(args, unsigned int), str));
	else if (str == 'p')
		return (ft_print_p(va_arg(args, void *)));
	else if (str == '%')
		return (ft_print_c('%'));
	else
		return (ft_print_o(str));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		c;

	if (!str)
		return (-1);
	va_start(args, str);
	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			c += ft_checkher(str[++i], args);
		}
		else
		{
			write(1, &str[i], 1);
			c++;
		}
		i++;
	}
	va_end(args);
	return (c);
}

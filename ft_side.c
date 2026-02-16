/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_side.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yukasaca <yukasaca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:03:42 by yukasaca          #+#    #+#             */
/*   Updated: 2026/02/16 22:05:28 by yukasaca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_print_s(char *str)
{
	int	i;
	int	count;

	if (!str)
		return (ft_print_s("(null)"));
	count = 0;
	i = 0;
	while (str[i])
	{
		count += ft_print_c(str[i]);
		i++;
	}
	return (count);
}

int	ft_print_d(int n)
{
	long	nbr;
	int		c;

	nbr = n;
	c = 0;
	if (nbr < 0)
	{
		c += ft_print_c('-');
		nbr = -nbr;
	}
	if (nbr < 10)
		c += ft_print_c(nbr + '0');
	else
	{
		c += ft_print_d(nbr / 10);
		c += ft_print_d(nbr % 10);
	}
	return (c);
}

int	ft_print_u(unsigned int n)
{
	int		c;
	char	nbr;

	c = 0;
	if (n >= 10)
		c += ft_print_u(n / 10);
	nbr = (n % 10) + '0';
	write(1, &nbr, 1);
	c++;
	return (c);
}

int	ft_print_p(void *number)
{
	int	len;

	len = 0;
	if (!number)
		return (write(1, "(nil)", 5));
	len += ft_print_s("0x");
	len += ft_print_x((unsigned long)number, 'x');
	return (len);
}

int	ft_print_x(unsigned long number, char c)
{
	char	*basehex;
	int		count;

	count = 0; 
	if (c == 'x')
		basehex = "0123456789abcdef";
	else
		basehex = "0123456789ABCDEF";
	if (number < 16)
		count += ft_print_c(*(basehex + number));
	else
	{
		count += ft_print_x((number / 16), c);
		count += ft_print_x((number % 16), c);
	}
	return (count);
}

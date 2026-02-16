#include "ft_printf.h"
#include <unistd.h>

int	ft_print_s(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_print_s("(null)"));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i + 2);
}
int	ft_print_d(long nbr)
{
	int	c;

	c = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		c += ft_print_c('-');
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
	{
		write(1, "(nil)", 5);
		return (5);
	}
	len += ft_print_s("0x");
	len += ft_print_x((unsigned long)number, 'x');
	return (len);
}

int	ft_print_x(unsigned long number, char c)
{
	char *basehex;
	int count;

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
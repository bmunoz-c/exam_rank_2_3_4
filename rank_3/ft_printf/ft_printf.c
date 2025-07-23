/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:33:51 by bmunoz-c          #+#    #+#             */
/*   Updated: 2025/02/25 20:08:13 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

void	ft_putstr(char *str, int *len)
{
	int	i = 0;

	if (!str)
		str = "(null)";
	while (str[i])
		*len += write(1, &str[i++], 1);
}

void	ft_putnbr(int nb, int base, int *len)
{
	char			*hexa = "0123456789abcdef";
	unsigned int	num;

	if (nb < 0 && base == 10)
	{
		*len += write(1, "-", 1);
		num = -nb;
	}
	else
		num = (unsigned int)nb;
	if (num >= (unsigned int)base)
		ft_putnbr(num / base, base, len);
	*len += write(1, &hexa[num % base], 1);
}

int	ft_printf(char *format, ...)
{
	int		i = 0;
	int		len = 0;
	va_list	args;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && (format[i + 1]))
		{
			i++;
			if (format[i] == 's')
				ft_putstr(va_arg(args, char *), &len);
			else if (format[i] == 'd')
				ft_putnbr(va_arg(args, int), 10, &len);
			else if (format[i] == 'x')
				ft_putnbr(va_arg(args, unsigned int), 16, &len);
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	return (va_end(args), len);
}

void	check_print(void)
{
	ft_printf("___________________\n_____MY TESTER_____\n\n");
	ft_printf("STRING: %s\n", "Tester casero de ft_printf.");
	ft_printf("NULL STRING: %s\n", NULL);
	ft_printf("DIGIT: %d\n", 42);
	ft_printf("NEGATIVE DIGIT: %d\n", -123);
	ft_printf("ZERO: %d\n", 0);
	ft_printf("MAX INT: %d\n", 2147483647);
	ft_printf("MIN INT: %d\n", -2147483648);
	ft_printf("HEXADECIMAL: %x\n", 255);
	ft_printf("LARGE HEXA: %x\n", 4294967295);
	ft_printf("___________________\n_____42 TESTER_____\n\n");
	ft_printf("%s\n", "toto");
	ft_printf("Magic %s is %d\n", "number", 42);
	ft_printf("HEXADECIMAL for %d is %x\n", 42, 42);
	ft_printf("HEXADECIMAL for %d is %X\n", 42, 42);
	ft_printf("___________________\n_____THE END !_____\n\n");
}

int	main(void)
{
	check_print();
	return (0);
}

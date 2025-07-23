/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:35:20 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/17 19:15:34 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int n)
{
	char	*a;

	a = "0123456789abcdef";
	if (n > 15)
	{
		ft_putnbr_base(n / 16);
		ft_putnbr_base(n % 16);
	}
	else
		write(1, &a[n], 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + str[i] - 48;
		i++;
	}
	return (res);
}

int	main(int ac, char **av)
{
	int	n;

	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		ft_putnbr_base(n);
	}
	write(1, "\n", 1);
	return (0);
}

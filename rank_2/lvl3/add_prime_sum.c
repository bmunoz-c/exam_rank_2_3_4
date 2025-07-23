/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 21:05:37 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/07/29 22:51:15 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res);
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n/10);
		ft_putnbr(n%10);
	}
	else
	{
		n += 48;
		write(1, &n, 1);
	}
}

int	is_prime(int n)
{
	int	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int		n;
	int		i;
	int		res;


	if (ac == 2)	
	{
		n = ft_atoi(av[1]);
		res = 0;
		i = 2;
		while (i <= n)
		{
			if (is_prime(i))
				res += i;
			i++;
		}
		ft_putnbr(res);
	}
	if (ac != 2)	
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}

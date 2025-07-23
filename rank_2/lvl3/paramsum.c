/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:22:01 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/06/18 18:03:12 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);	
	ft_putchar((n % 10) + 48);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		ft_putnbr(ac - 1);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}

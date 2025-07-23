/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:09:14 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/07/31 15:22:40 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*s1;
	char	*s2;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		s1 = av[1];
		s2 = av[2];
		while (s1[i] && s2[j])
		{
			if (s1[i] == s2[j])
				i++;
			j++;
		}
		if (s1[i] == '\0')
			ft_putnbr(1);
		else
			ft_putnbr(0);
	}
	write(1, "\n", 1);
	return (0);
}

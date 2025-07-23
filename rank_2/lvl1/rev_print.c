/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 19:58:32 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/06/25 20:00:59 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;
	char *str;

	if (ac == 2)
	{
		str = av[1];
		i = ft_strlen(str) - 1;
		while (i >= 0)
		{
			write(1, &str[i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);

}

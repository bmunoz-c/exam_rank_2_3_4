/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 20:14:58 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/06/13 20:45:43 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	int		rep;
	char	*str;

	if (ac == 2)
	{
		i = 0;
		rep = 0;
		str = av[1];
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				rep = str[i] - 'a' + 1;
			else if (str[i] >= 'A' && str[i] <= 'Z')
				rep = str[i] - 'A' + 1;
			else
				rep = 1;
			while (rep > 0)
			{
				write(1, &str[i], 1);
				rep--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

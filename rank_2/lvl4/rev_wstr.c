/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:45:33 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/04 20:16:43 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

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
	int		i;
	int		j;
	char	*str;

	if (ac == 2)
	{
		str = av[1];
		j = ft_strlen(str) - 1;
		while (j >= 0)
		{
			if (is_space(str[j]))
			{
				i = j + 1;
				while (str[i] && !is_space(str[i]))
				{
					write(1, &str[i], 1);
					i++;
				}
				write(1, " ", 1);
			}
			j--;
		}
		i = 0;
		while (str[i] && !is_space(str[i]))
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

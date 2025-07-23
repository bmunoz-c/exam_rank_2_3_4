/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:09:14 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/10 13:13:12 by bmunoz-c         ###   ########.fr       */
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

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*str;

	if (ac == 2)
	{
		i = 0;
		str = av[1];
		j = ft_strlen(str) - 1;
		while (is_space(str[i]))
			i++;
		while (is_space(str[j]))
			j--;
		while (j >= i)
		{
			if (is_space(str[i]))
			{
				write(1, "   ", 3);
				while (is_space(str[i]))
					i++;
			}
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:17:11 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/07/31 17:27:45 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_repeat(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*s1;
	char	*s2;

	if (ac == 3)
	{
		s1 = av[1];
		s2 = av[2];
		i = 0;
		while (s1[i])
		{
			j = 0;
			while (s2[j])
			{
				if (!is_repeat(s1, s1[i], i) && !is_repeat(s2, s1[i], j)
					&& s1[i] == s2[j])
					write(1, &s1[i], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

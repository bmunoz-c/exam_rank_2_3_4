/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:48:07 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/06/18 16:44:01 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_rep(char *str, char c, int len)
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
		i = 0;
		j = 0;
		s1 = av[1];
		s2 = av[2];
		while (s1[i])
		{
			if (!is_rep(s1, s1[i], i))
				write(1, &s1[i], 1);
			i++;	
		}
		while (s2[j])
		{
			if (!is_rep(s2, s2[j], j) && (!is_rep(s1, s2[j], i)))
				write(1, &s2[j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

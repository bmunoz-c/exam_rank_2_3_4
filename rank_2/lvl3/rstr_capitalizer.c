/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 20:41:33 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/06/25 21:31:05 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32 || c == '\0');
}

int	main(int ac, char **av)
{
	int	i;
	int	num_ac;
	char *str;
	
	num_ac = 1;
	if (ac >= 2)
	{
		while (av[num_ac])
		{
			i = 0;
		
			str = av[num_ac];
			while (str[i])
			{	
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
				if (str[i] >= 'a' && str[i] <= 'z' && (is_space(str[i + 1])))
					str[i] -= 32;
				write(1, &str[i], 1);
				i++;
			}
			write(1, "\n", 1);
			num_ac++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}

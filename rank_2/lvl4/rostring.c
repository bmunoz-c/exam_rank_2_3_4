/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:48:14 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/09 15:13:18 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32 || c == '\0');
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_word(char *str)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!is_space(str[i]) && is_space(str[i + 1]))
			words++;
		i++;
	}
	return (words);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*str;

	if (ac > 0)
	{
		i = 0;
		str = av[1];
		j = ft_strlen(str) - 1;
		while (is_space(str[i]))
			i++;
		while (!is_space(str[i]))
			i++;
		i += 1;
		while (is_space(str[j]))
			j--;
		while (j >= i)
		{
			while (is_space(str[i]) && is_space(str[i + 1]))
				i++;
			write(1, &str[i], 1);
			i++;
		}
		if (count_word(str) > 1)
			write(1, " ", 1);
		i = 0;
		while (is_space(str[i]))
			i++;
		while (str[i] && !is_space(str[i]))
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 21:34:39 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/06/24 21:41:06 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

char	*ft_strncpy(char *s1, char *s2, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return s1;
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **res;

	res = (char **)malloc(sizeof(char *) * 1000);
	while (str[i])
	{
		while ((str[i] && is_space(str[i])))
			i++;
		j = i;
		while ((str[i] && !is_space(str[i])))
			i++;
		if (i > j)
		{
			res[k] = malloc(sizeof(char *) * 1000);
			ft_strncpy(res[k++], &str[j], i - j);
		}
	}
	res[k] = '\0';
	return (res);
}
/*
int main(int ac, char **av)
{
	if (ac != 2)
		write (1, "\n", 1);
	else
	{
		int i = 0;
		char **str;

	str = ft_split(av[1]);
	while (str[i])
		printf("%s\n", str[i++]);
	}
}*/

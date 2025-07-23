/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:06:26 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/12 18:09:49 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int	count_words(char *str)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = ft_strlen(str);
	count = 0;
	while (is_space(str[i]))
		i++;
	while (is_space(str[j]))
		j--;
	while (i <= j)
	{
		if (!is_space(str[i]) && (is_space(str[i + 1])))
			count++;
		i++;
	}
	printf("count = %d\n", count);
	return (count);
}

char	*ft_strncpy(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**res;

	i = 0;
	j = 0;
	k = 0;
	res = (char **)malloc(sizeof(char *) * count_words(str) + 1);
	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		j = i;
		while (str[i] && !is_space(str[i]))
			i++;
		if (i > j)
		{
			res[k] = malloc(sizeof(char *) * i - j + 1);
			ft_strncpy(res[k++], &str[j], i - j);
		}
	}
	res[k] = '\0';
	return (res);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	char	**res;

	if (ac == 2)
	{
		res = ft_split(av[1]);
		while (res[i])
		{
			printf("%s\n", res[i]);
			i++;
		}

	}
	return (0);
}
*/

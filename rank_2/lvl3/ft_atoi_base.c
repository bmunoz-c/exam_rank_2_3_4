/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:39:48 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/06 19:59:34 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (is_space(str[i]))
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * str_base + str[i] - 48;
		else if (str[i] >= 'a' && str[i] <= 'f')
			res = res * str_base + str[i] + 10 - 'a';
		else if (str[i] >= 'A' && str[i] <= 'F')
			res = res * str_base + str[i] + 10 - 'A';
		else
			break ;
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
int	main()
{
	char	s[] = "Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base." "16";
	printf("%d\n", ft_atoi_base(s, 16));
	return(0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:54:07 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/13 22:50:36 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	num_len(int	n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}


char	*ft_itoa(int nbr)
{
	int		len;
	char	*res;

	len = num_len(nbr);
	res = malloc(sizeof(char) * len + 1);
	res[len] = '\0';
	len--;
	if (nbr == 0)
		return ("0");
	if (nbr == -2147483648)
		return ("-2147483648");
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		res[len] = (nbr % 10) + 48;
		nbr /= 10;
		len--;
	}
	return (res);
}
/*
int	main()
{
	int	nbr = 42;
	printf("%s\n", ft_itoa(nbr));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 21:09:18 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/06/24 21:21:39 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{	
	int	i;
	int	n;

	if (ac == 2)
	{
		i = 2;
		n = atoi(av[1]);
		if (n == 1)
			printf("1");
		while (n >= i)
		{
			if (n % i == 0)
			{
				printf("%d", i);
				if (n == i)
					break ;
				printf("*");
				n /= i;
				i = 2;
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:41:03 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/07/19 14:01:21 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	n1;
	int	n2;
	int	res;
	
	if (ac == 3)
	{
		n1 = atoi(av[1]);
		n2 = atoi(av[2]);
		if (n1 > n2)
			res = n2;
		else
			res = n1;
		while (res > 0)
		{
			if (n1 % res == 0 && n2 % res == 0)
			{
				printf("%d\n", res);
				break ;
			}
			res--;
		}
	}
	else
		printf("\n");
	return (0);
}

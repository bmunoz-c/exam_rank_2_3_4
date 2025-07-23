/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:20:02 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/06/24 18:36:20 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int		n1;
	int		n2;

	if (ac == 4)
	{
		n1 = atoi(av[1]);
		n2 = atoi(av[3]);
		if (av[2][0] == '+')
			printf("%d", n1 + n2);
		else if (av[2][0] == '-')
			printf("%d", n1 - n2);
		else if (av[2][0] == '*')
			printf("%d", n1 * n2);
		else if (av[2][0] == '/')
			printf("%d", n1 / n2);
		else if (av[2][0] == '%')
			printf("%d", n1 % n2);
	}
	printf("\n");
	return (0);
}

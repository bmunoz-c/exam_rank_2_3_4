/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:34:01 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/10 17:17:41 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		max(int* tab, unsigned int len)
{
	int	n;
	int	i;

	if (tab[0] == '\0')
		return (0);
	i = 0;
	n = tab[0];
	while (i < len)
	{
		if (n < tab[i])
			n = tab[i];
		i++;
	}
	return (n);
}
/*
#include <stdio.h>
int	main()
{
	int	n[] = {};
	int	len = 4;
	printf("%d\n", max(n, len));
	return (0);
}
*/

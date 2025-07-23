/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:57:32 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/04 18:17:51 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	*res;
	int	len_se;
	int	len_es;
	int	i;

	i = 0;
	if (start > end)
	{
		len_se = start - end + 1;
		res = malloc(sizeof(int) * len_se);
		while (i < len_se)
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	else
	{
		len_es = end - start + 1;
		res = malloc(sizeof(int) * len_es);
		while (i < len_es)
		{
			res[i] = start;
			start++;
			i++;
		}
	}
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	int	start = 1;
	int	end = 3;
	printf("%d\n", *ft_range(start, end));
	return (0);
}*/

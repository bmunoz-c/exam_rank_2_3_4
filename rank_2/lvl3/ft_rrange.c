/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:38:22 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/06/24 19:29:05 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int	len_se;
	int	len_es;
	int	*res;

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
			res[i] = end;
			end--;
			i++;
		}
	}
	return (res);
}

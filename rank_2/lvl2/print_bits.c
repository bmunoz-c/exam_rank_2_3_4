/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:29:23 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/06/11 20:17:37 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int i = 7;
	char bits;

	while(i >= 0)
	{
		bits = ((octet >> i) & 1) + '0';
		write(1, &bits, 1);
		i--;
	}
}

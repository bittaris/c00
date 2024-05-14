/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibittar <ibittar@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:10:40 by ibittar           #+#    #+#             */
/*   Updated: 2024/03/10 10:51:41 by ibittar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	digit[3];

	digit[0] = '0';
	while (digit[0] <= '7')
	{
		digit[1] = digit[0] + 1;
		while (digit[1] <= '8')
		{
			digit[2] = digit[1] + 1;
			while (digit[2] <= '9')
			{
				write(1, &digit[0], 1);
				write(1, &digit[1], 1);
				write(1, &digit[2], 1);
				if (digit[0] != '7' || digit[1] != '8' || digit[2] != '9')
				{
					write(1, ", ", 2);
				}
				++digit[2];
			}
			++digit[1];
		}
		++digit[0];
	}
}

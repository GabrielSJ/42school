/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 00:22:17 by gstrada-          #+#    #+#             */
/*   Updated: 2020/11/26 12:19:32 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	looping_n3_n4(int n1, int n2, int n3, int n4);

void	ft_print_comb2(void)
{
	char numbers[4];

	numbers[0] = '0';
	numbers[1] = '0';
	numbers[2] = '0';
	numbers[3] = '1';
	while (numbers[0] <= '9')
	{
		while (numbers[1] <= '9')
		{
			looping_n3_n4(numbers[0], numbers[1], numbers[2], numbers[3]);
			numbers[1]++;
			numbers[3]++;
			if (numbers[3] > '9')
			{
				numbers[3] = '0';
				numbers[2]++;
			}
		}
		if (numbers[1] >= '9')
		{
			numbers[1] = '0';
			numbers[0]++;
		}
	}
}

void	looping_n3_n4(int n1, int n2, int n3, int n4)
{
	while (n3 <= '9')
	{
		while (n4 <= '9')
		{
			write(1, &n1, 1);
			write(1, &n2, 1);
			write(1, " ", 1);
			write(1, &n3, 1);
			write(1, &n4, 1);
			if (n1 == '9' && n2 == '8')
				write(1, "", 1);
			else
				write(1, ", ", 2);
			n4++;
		}
		if (n4 >= '9')
		{
			n4 = '0';
			n3++;
		}
	}
}

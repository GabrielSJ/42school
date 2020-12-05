/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 23:18:17 by gstrada-          #+#    #+#             */
/*   Updated: 2020/11/26 04:21:41 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char list_numbers[3];

	list_numbers[0] = '0';
	list_numbers[1] = '1';
	list_numbers[2] = '2';
	while (list_numbers[0] <= '7')
	{
		write(1, &list_numbers[0], 1);
		write(1, &list_numbers[1], 1);
		write(1, &list_numbers[2], 1);
		if (list_numbers[0] != '7')
			write(1, ", ", 2);
		list_numbers[2]++;
		if (list_numbers[2] > '9')
		{
			list_numbers[1]++;
			list_numbers[2] = list_numbers[1] + 1;
		}
		if (list_numbers[1] > '8')
		{
			list_numbers[0]++;
			list_numbers[1] = list_numbers[0] + 1;
			list_numbers[2] = list_numbers[1] + 1;
		}
	}
}

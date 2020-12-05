/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 12:50:52 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/03 16:45:17 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	number;
	char		list_numbers[11];
	int			count_list;

	number = nb;
	if (number == 0)
		write(1, "0", 1);
	count_list = 0;
	if (number < 0)
	{
		number = -number;
		write(1, "-", 1);
	}
	while (number > 0)
	{
		list_numbers[count_list] = number % 10 + '0';
		number = number / 10;
		count_list++;
	}
	while (count_list > 0)
	{
		write(1, &list_numbers[count_list - 1], 1);
		count_list--;
	}
}

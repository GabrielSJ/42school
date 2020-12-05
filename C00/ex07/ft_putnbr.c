/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 23:27:26 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/03 18:55:45 by gstrada-         ###   ########.fr       */
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

int        main(void)
{
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(-42);
    write(1, "\n", 1);
    ft_putnbr(-1);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
    ft_putnbr(1);
    write(1, "\n", 1);
    ft_putnbr(42);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    write(1, "\n", 1);
    return (0);
}
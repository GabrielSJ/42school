/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:49:30 by gstrada-          #+#    #+#             */
/*   Updated: 2020/11/23 17:52:08 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int count_numbers;

	count_numbers = '0';
	while (count_numbers <= '9')
	{
		write(1, &count_numbers, 1);
		count_numbers++;
	}
}

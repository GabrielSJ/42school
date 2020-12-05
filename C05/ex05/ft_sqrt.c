/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 04:14:24 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/04 15:38:59 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int count;
	int temp;

	count = 1;
	temp = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (temp <= nb && count < 46341)
	{
		count++;
		temp = count * count;
	}
	if (nb == (count - 1) * (count - 1))
		return (count - 1);
	return (0);
}

#include <stdio.h>

int main(void)
{
	int result;

	result = ft_sqrt(100);

	printf("O valor é -> %d\n", result);	
}

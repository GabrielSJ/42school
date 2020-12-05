/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 23:01:06 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/04 18:41:33 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int temp;
	int count;

	temp = 1;
	count = 0;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (count < power)
	{
		temp = nb * temp;  
		count++;
	}
	return (temp);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 23:43:32 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/04 12:22:27 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int temp;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		temp = nb * ft_recursive_power(nb, (power - 1));
	}
	return (temp);
}

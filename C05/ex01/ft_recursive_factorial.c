/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 22:27:16 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/04 12:19:55 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}

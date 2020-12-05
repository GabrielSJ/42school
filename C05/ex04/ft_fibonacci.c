/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 00:54:29 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/04 12:25:53 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int temp;

	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	else
	{
		temp = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (temp);
}

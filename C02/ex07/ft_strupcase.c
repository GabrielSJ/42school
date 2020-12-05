/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:40:41 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/01 13:04:58 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	temp;
	int		count;

	count = 0;
	temp = str[count];
	while (temp != '\0')
	{
		temp = str[count];
		if (temp >= 'a' && temp <= 'z')
		{
			str[count] = temp - 32;
		}
		count++;
	}
	return (str);
}

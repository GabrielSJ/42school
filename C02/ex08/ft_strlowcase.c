/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:40:38 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/01 13:08:04 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	temp;
	int		count;

	count = 0;
	temp = str[count];
	while (temp != '\0')
	{
		temp = str[count];
		if (temp >= 'A' && temp <= 'Z')
		{
			str[count] = temp + 32;
		}
		count++;
	}
	return (str);
}

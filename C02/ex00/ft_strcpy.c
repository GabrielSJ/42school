/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:50:10 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/01 12:46:07 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int count_i;

	count_i = 0;
	while (src[count_i] != '\0')
	{
		dest[count_i] = src[count_i];
		count_i++;
	}
	dest[count_i] = '\0';
	return (dest);
}

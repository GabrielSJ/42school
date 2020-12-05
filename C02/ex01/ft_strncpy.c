/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:24:35 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/01 12:46:35 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int count_i;

	count_i = 0;
	while (count_i < n && src[count_i] != '\0')
	{
		dest[count_i] = src[count_i];
		count_i++;
	}
	while (count_i < n)
	{
		dest[count_i] = '\0';
		count_i++;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:12:14 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/02 14:54:17 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count_c;

	count_c = 0;
	if (n == 0 && count_c == n)
	{
		return (0);
	}
	while (s1[count_c] != '\0' && s1[count_c] == s2[count_c])
	{
		if (count_c + 1 == n)
		{
			return ((unsigned char)s1[count_c] - (unsigned char)s2[count_c]);
		}
		count_c++;
	}
	return ((unsigned char)s1[count_c] - (unsigned char)s2[count_c]);
}

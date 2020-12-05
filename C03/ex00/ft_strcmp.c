/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:46:37 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/02 14:53:10 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while (s1[count] != '\0' && (s1[count] == s2[count]))
	{
		count++;
	}
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}

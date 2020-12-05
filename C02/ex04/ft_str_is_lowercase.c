/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:09:35 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/01 12:50:58 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int is_alpha;

	is_alpha = 0;
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			is_alpha = 1;
		else
			return (0);
		str++;
	}
	return (is_alpha);
}

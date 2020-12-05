/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:19:29 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/01 12:47:42 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int is_alpha;

	is_alpha = 0;
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str >= 97 && *str <= 122) || (*str >= 65 && *str <= 90))
			is_alpha = 1;
		else
			return (0);
		str++;
	}
	return (is_alpha);
}

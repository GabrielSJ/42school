/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 19:50:09 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/02 16:31:29 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int	dest_len;
	int	count;

	count = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[count] != '\0')
	{
		dest[dest_len] = src[count];
		dest_len++;
		count++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char src[11] = "Ola";
	char dest[60] = "teste";
	printf("\nString antes: %s\n", src);
	ft_strcat(dest, src);
	printf("Depos de concatenar: %s\n\n", dest);

}

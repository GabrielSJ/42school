/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 22:18:42 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/02 21:20:23 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int			dest_len;
	unsigned	count;

	count = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (count < nb && src[count] != '\0')
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
	printf("\nString antes: %s\n", dest);

	ft_strncat(dest, src, 0);
	printf("Depos de concatenar: %s\n\n", dest);

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 12:44:03 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/04 15:33:49 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_name(char *name);

int	main(int argc, char **argv)
{
	int	size;

	(void)argc;
	size = count_name(argv[0]);
	write(1, argv[0], size);
	write(1, "\n", 1);
	return (0);
}

int	count_name(char *name)
{
	int count;

	count = 0;
	while (name[count] != '\0')
	{
		count++;
	}
	return (count);
}

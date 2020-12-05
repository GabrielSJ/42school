/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:19:06 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/04 16:01:28 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_name(char *name);

int	main(int argc, char **argv)
{
	int count_argc;
	int size;

	count_argc = 1;
	while (count_argc < argc)
	{
		if (argc > 1)
		{
			size = count_name(argv[count_argc]);
		}
		write(1, argv[count_argc], size);
		if (count_argc < argc)
			write(1, "\n", 1);
		count_argc++;
	}
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:15:48 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/04 15:56:28 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_name(char *name);

int	main(int argc, char **argv)
{
	int size;

	while (argc > 1)
	{
		if (argc > 1)
		{
			size = count_name(argv[argc - 1]);
		}
		write(1, argv[argc - 1], size);
		if (argc > 1)
			write(1, "\n", 1);
		argc--;
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

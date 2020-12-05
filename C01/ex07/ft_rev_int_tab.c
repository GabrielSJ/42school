/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:42:14 by gstrada-          #+#    #+#             */
/*   Updated: 2020/11/30 17:27:06 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int count_posi;
	int temp;

	count_posi = 0;
	while (count_posi < size)
	{
		temp = tab[count_posi];
		tab[count_posi] = tab[size - 1];
		tab[size - 1] = temp;
		count_posi++;
		size--;
	}
}

int		main(void)
{
	int total = 9;
	int array_i[total];
	int count_i;
	int *pointer;
	int pointer_i = 0;
	int pointer_new = 0;

	count_i = 0;
	while (count_i < total)
	{
		array_i[count_i] = count_i + 1;
		count_i++;
	}
	
	pointer = array_i;

	while(pointer_i < total)
	{
		printf("%d",pointer[pointer_i]);
		printf(",");
		pointer_i++;
	}
	
	ft_rev_int_tab(pointer, total);

	printf("\n");
	while(pointer_new < total)
	{
		printf("%d",pointer[pointer_new]);
		printf(",");
		pointer_new++;
	}
	printf("\n");
	
	return (0);
}

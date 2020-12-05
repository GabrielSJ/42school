/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstrada- <gstrada-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:01:02 by gstrada-          #+#    #+#             */
/*   Updated: 2020/12/04 20:41:14 by gstrada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_letter(char letter);
int ft_negative();
int ft_result(int count_sinal, int result);
int ft_principal(int count_str, int finish, int count_sinal, char *str);

int	ft_atoi(char *str)
{
	int count_str;
	int finish;
	int count_sinal;

	count_sinal = 0;
	finish = 0;
	count_str = 0;
	return (ft_principal(count_str, finish, count_sinal, str));
}

int	ft_principal(int count_str, int finish, int count_sinal, char *str)
{
	int result;

	result = 0;
	while (str[count_str] != '\0' && finish == 0)
	{
		finish = ft_letter(str[count_str]);
		if (str[count_str] == '-')
			count_sinal = ft_negative(count_sinal);
		if (str[count_str] >= 48 && str[count_str] <= 57)
		{
			while (str[count_str] >= 48 && str[count_str] <= 57)
			{
				result = result * 10 + str[count_str] - '0';
				count_str++;
			}
			return (result = ft_result(count_sinal, result));
		}
		count_str++;
	}
	return (0);
}

int	ft_result(int count_sinal, int result)
{
	if (count_sinal % 2 == 1)
		return (result * (-1));
	else
		return (result);
	return (0);
}

int	ft_letter(char letter)
{
	int finish;

	finish = 1;
	if (letter == 43 || letter == 45 || letter == 32)
		finish = 0;
	if ((letter == '\t') || (letter == '\n') || (letter == '\f'))
		finish = 0;
	if ((letter == '\r') || (letter == '\v'))
		finish = 0;
	if (letter >= 48 && letter <= 57)
		finish = 0;
	return (finish);
}

int	ft_negative(int count_s)
{
	int count_sinal;

	count_sinal = count_s + 1;
	return (count_sinal);
}

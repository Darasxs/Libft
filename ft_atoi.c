/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:40:52 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/09 14:48:23 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	final_number;

	i = 0;
	sign = 1;
	final_number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		final_number = final_number * 10 + (str[i] - '0');
		i++;
	}
	return (final_number * sign);
}
// int main()
// {
//     char check[] = "--+-9219s12ss";
//     int result = ft_atoi(check);
//     printf("%d\n", result);

//     return 0;
// }
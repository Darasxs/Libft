/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:40:52 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/04/06 13:07:52 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	final_number;
	int	counter;

	final_number = 0;
	counter = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		counter++;
		if (counter > 1)
			return (0);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		final_number = final_number * 10 + (*str - '0');
		str++;
	}
	return (final_number * sign);
}
// int main()
// {
//     char check[] = "-2147483648";
//     int result = ft_atoi(check);
//     printf("%d\n", result);

//     return 0;
// }
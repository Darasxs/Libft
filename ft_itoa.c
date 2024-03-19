/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:20:36 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/18 15:25:50 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_size(int number);

char	*ft_itoa(int n)
{
	char			*str;
	long			nbr;
	unsigned int	length;

	nbr = n;
	length = ft_size(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	str[length] = '\0';
	while (nbr != 0)
	{
		str[--length] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}

static unsigned int	ft_size(int number)
{
	unsigned int	i;

	i = 0;
	if (number == 0)
		return (1);
	if (number < 0)
	{
		i++;
		number = -number;
	}
	while (number != 0)
	{
		number = number / 10;
		i++;
	}
	return (i);
}
//static void ft_logic(char *str, long nbr, unsigned int length)
//{
//	while (nbr != 0)
//	{
//		length--;
//		str[length] = (nbr % 10 ) + '0';
//		nbr = nbr / 10;
//	}
//	return str;
//}

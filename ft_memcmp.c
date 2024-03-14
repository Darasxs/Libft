/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:39:55 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/14 17:07:01 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t	i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (str1 == 0 && str2 == 0)
		return (0);
	while (i < n)
	{
		if (str1[i] > str2[i])
			return (str1[i] - str2[i]);
		else if (str2[i] > str1[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
// #include <string.h>
// int main()
// {
//     int result1 = ft_memcmp("A", "uello", 5);
//     int result2 = ft_memcmp("u", "abdbbb", 4);
//     printf("%d\n", result1);
//     printf("%d\n", result2);
//     return 0;
// } 
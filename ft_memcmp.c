/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:39:55 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/14 09:19:49 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((unsigned char)str1[i] > (unsigned char)str2[i])
			return (1);
		if ((unsigned char )str2[i] > (unsigned char)str1[i])
			return (-1);
		i++;
	}
	return (0);
}
// #include <string.h>
// int main()
// {
//     int result1 = ft_memcmp("hello", "hello", 5);
//     int result2 = ft_memcmp("xabfaaa", "abdbbb", 4);
//     printf("%d\n", result1);
//     printf("%d\n", result2);
//     return 0;
// } 
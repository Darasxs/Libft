/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:25:38 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/10 11:21:43 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((s1[i] != '\0') || (s2[i] != '\0')) && i < n - 1)
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		else if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		i++;
	}
	return (0);
}
// int main()
// {
//     int result1 = ft_strncmp("hello", "hello", 5);
//     int result2 = ft_strncmp("xabfaaa", "abdbbb", 4);
//     printf("%d\n", result1);
//     printf("%d\n", result2);
//     return 0;
// } 
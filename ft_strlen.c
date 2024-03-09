/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:14:31 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/09 15:24:42 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
// #include <stdio.h>

// int main(void)
// {
//     const char word[] = "kapelusz";
//     size_t length = ft_strlen(word);
//     printf("Length of the string: %zu\n", length);
//     return 0;
// }
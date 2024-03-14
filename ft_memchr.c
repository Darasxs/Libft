/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:27:14 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/14 08:53:22 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			return ((unsigned char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
//     char *word = "truskawka";
//     int d = 'w';

//     char *result = ft_memchr(word, d, 10);
//     if (result != NULL)
//     {
//printf	("Character '%c' found at position: %ld\n", *result, result - word);
//     }
//     else
//     {
//         printf("Character '%c' not found in the string.\n", d);
//     }
//     return 0;
// }
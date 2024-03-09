/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:28:13 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/09 15:20:09 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

// int main()
// {
//     char *word = "truskawka";
//     int d = '\0';
//     char *result = ft_strchr(word, d);
//     if (result != NULL)
//     {
//printf("Character '%c' found at position: %ld\n", *result, result - word);
//     }
//     else
//     {
//         printf("Character '%c' not found in the string.\n", d);
//     }
//     return 0;
// }
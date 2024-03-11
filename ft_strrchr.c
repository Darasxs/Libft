/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:26:51 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/11 09:46:37 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	while (i > 0)
	{
		i--;
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
	}
	return (NULL);
}
// int main()
// {
//     char *word = "iyajsasda";
//     int d = 'a';
//    char *result = ft_strrchr(word, d);
//     if(result != NULL)
//     {
//printf("Character '%c' found at position: %ld\n", *result, result - word);
//     }
//     else
//     {
//         printf("Character '%c' not found.\n", d);
//     }
//     return 0;
// }
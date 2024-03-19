/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:04:19 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/19 10:04:59 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	if (!ft_strlen(haystack))
		return (NULL);
	if (len < ft_strlen(needle))
		return (NULL);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] != '\0' && needle[j] != '\0' && i + j < len)
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break ;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

// #include <string.h>
// int main()
// {
//     char haystack[] = "hello world";
//     char needle[] = "world";
//     char *result = ft_strnstr(haystack, needle, 2);

//     if(result != NULL)
// printf("The needle (%s) pos: %ld\n ", needle, (long)(result - haystack));
//     else
// printf("the needle (%s) was not found in the haystack.", needle);
//     return (0);
// }

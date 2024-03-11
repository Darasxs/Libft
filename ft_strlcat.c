/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:00:58 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/11 09:47:06 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t i;
	size_t result;
	
	i = 0;
	while(dst[i] != '\0' && i < dstsize)
	{
		i++;
	}

	result = ft_strlcpy(&dst[i], src, dstsize - i);
	return(result + i);
}

// int main()
// {
//     char dest[20] = "hello, ";
//     char src[] = "world!";
//     size_t len = sizeof(dest);

//     ft_strlcat(dest, src, len);

//     printf("%s\n", dest);

//     return 0;
// }
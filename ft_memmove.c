/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:57:04 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/19 11:31:38 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dst;
	s = (const char *)src;
	i = -1;
	if (dst == 0 && src == 0)
		return (dst);
	if (d > s)
		while (len--)
			d[len] = s[len];
	else
		while (++i < len)
			d[i] = s[i];
	return (dst);
}

// int main()
// {
//     char test[] = "123456789";
//     printf("Original string: %s\n", test);

//     ft_memmove(test + 5, test + 1, 4);
//     printf("After memmove (overlapping to the right): %s\n", test);

//     return 0;   
// }
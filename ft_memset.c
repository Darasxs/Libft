/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:33:59 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/09 15:35:14 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
}
// int main(void)
// {
//     char array[10];
//     int i = 0;

//     ft_memset(array, '{', sizeof(array));

//     while(i < sizeof(array))
//     {
//         printf("%c ", array[i]);
//         i++;
//     }
//     printf("\n");

//     return 0;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:57:04 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/06 17:54:44 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void ft_memmove(void *dst, const void *src, size_t len)
{
    char *d = (char *)dst;
    const char *s = (const char *)src;
    size_t i;

    i = 0;

    if(d > s)
    {
        while(len > 0)
        {
            len--;
            d[len] = s[len];
        }
    }
    else
        while(i < len)
        {
            d[i] = s[i];
            i++;
        }

    return;
}
// int main()
// {
//     char test[] = "123456789";
//     printf("Original string: %s\n", test);

//     ft_memmove(test + 3, test +4, 1);
//     printf("After memmove (overlapping to the right): %s\n", test);

//     return 0;   
// }
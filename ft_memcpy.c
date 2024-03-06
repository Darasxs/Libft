/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:18:15 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/06 13:56:34 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char *d = (char *)dst;
    const char *s = (const char *)src;

    size_t i;

    i = 0;

    while(i < n)
    {
        d[i] = s[i];
        i++;
    }

}
// int main(void)
// {
//     char source[] = "hello world!";
//     char dest[13];
//     size_t len = sizeof(source) + 1;

//     ft_memcpy(dest, source, len);

//     printf("Copied string: %s", dest);

//     return 0;
// }
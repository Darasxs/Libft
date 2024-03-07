/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:00:58 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/07 16:24:56 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s);

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;  
    j = 0;  

    while(i < dstsize - 1 && dst[i] != '\0')
    {
        i++;
    }
    while(src[j] != '\0' && (i + j) < dstsize)
    {
        dst[i + j] = src[j];
        j++;
    }
    
    if(i < dstsize)
        dst[i + j] = '\0';
    
    return (i + ft_strlen(src));

}

size_t ft_strlen(const char *s)
{
    size_t len;
    
    len = 0;

    while(s[len] != '\0')
    {
        len++;
    }
    return len;
}
int main()
{
    char dest[] = "hello, ";
    char src[] = "world!";
    size_t len = 20;

    ft_strlcat(dest, src, len);

    printf("%s", dest);

    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:04:19 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/09 12:40:19 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if(needle == NULL || *needle == '\0')
        return (char *)haystack;

    if(haystack == NULL)
        return (NULL);

    i = 0;
    while(haystack[i] != '\0' && i < len)
    {
        j = 0;
        while(haystack[i + j] != '\0' && needle[j] != '\0' && i + j < len)
        {
            if(haystack[i +j] == needle[j])
                j++;
            else
                break;
        }
        if(needle[j] == '\0')
            return ((char *)haystack + i);
        i++;
    }
    return NULL;
}

// #include <string.h>

// int main()
// {
//     char haystack[] = "hello world";
//     char needle[] = "";
//     char *result = ft_strnstr(haystack, needle, 15);

//     if(result != NULL)
//         printf("The needle (%s) found at position %ld\n", needle, (long)(result - haystack));
//     else
//         printf("the needle (%s) was not found in the haystack.", needle);

//     return 0;
// }

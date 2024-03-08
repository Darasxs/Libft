/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:26:51 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/08 14:25:04 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s);

char *ft_strrchr(const char *s, int c)
{
    size_t i;

    i = ft_strlen(s);

    if(s == NULL)
        return NULL;

    if(c == '\0')
    {
        return((char *)&s[i]);
    }

    while(i > 0)
    {
        i--;
        if (s[i] == c)
        {
            return((char *)&s[i]);
        }
    }
    return NULL;
    
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
// int main()
// {
//     char *word = "iyajsasda";
//     int d = 'a';
    
//     char *result = ft_strrchr(word, d);

//     if(result != NULL)
//     {
//         printf("Character '%c' found at position: %ld\n", *result, result - word);
//     }
//     else
//     {
//         printf("Character '%c' not found.\n", d);
//     }

//     return 0;
// }
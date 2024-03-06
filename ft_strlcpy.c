/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:47:07 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/06 19:03:58 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;

    i = 0;

    while(i < dstsize -1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = "\0";
}
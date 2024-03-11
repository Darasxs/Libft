/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:58:11 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/11 10:50:52 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_not_char(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**s;
	size_t	i;
	size_t	j;

	
}

static	size_t	ft_not_char(const char *s, char c)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	
	while(s[i] != '\0')
	{
		while(s[i] != c && s[i] != '\0')
		{
			j++;
			i++;
		}
	i++;	
	}

	return(j);
}
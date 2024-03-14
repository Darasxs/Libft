/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:25:27 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/14 10:05:04 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	i = 0;
	split = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (split == NULL)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s && *s != c && ++j)
				++s;
			split[i++] = ft_substr(s - j, 0, j);
		}
		else
			s++;
	}
	split[i] = 0;
	return (split);
}

// we have the main string and we want to count how many substrings are there
static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			counter++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (counter);
}

// ft_free_split(char **split)
//{
//	size_t i;

//	i = 0;

//	if (split == NULL)
//		return (NULL);
//	while (split[i] != '\0')
//	{
//		free(split[i]);
//		i++;
//	}

//	free(split);
//}
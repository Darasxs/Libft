/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:25:27 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/20 16:05:52 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static size_t	ft_count_length(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char	*ft_copying_words(const char *s, char c)
{
	size_t	len;
	char	*new;

	len = ft_count_length(s, c);
	new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s, len + 1);
	return (new);
}

static void	ft_free_memory(char **s)
{
	int	i;

	i = 0;
	while (s[i] != NULL)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	split;

	split = 0;
	new = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (new == NULL)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			new[split++] = ft_copying_words(s, c);
			if (new[split - 1] == NULL)
			{
				ft_free_memory(new);
				return (NULL);
			}
			while (*s && *s != c)
				s++;
		}
	}
	new[split] = NULL;
	return (new);
}

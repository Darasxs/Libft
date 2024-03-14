/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:43:10 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/14 10:07:11 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	beginning;
	size_t	end;
	size_t	k;

	beginning = 0;
	k = 0;
	while (s1[beginning] != '\0' && ft_check(s1[beginning], set))
		beginning++;
	end = ft_strlen(s1);
	while (end > beginning && ft_check(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - beginning + 1));
	if (str == NULL)
		return (NULL);
	while (beginning < end)
		str[k++] = s1[beginning++];
	str[k] = '\0';
	return (str);
}

static int	ft_check(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

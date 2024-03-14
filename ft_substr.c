/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:21:08 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/14 10:58:09 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	while (s[i] != '\0' && i < start + len)
	{
		if (i >= start)
		{
			new[j] = s[i];
			j++;
		}
		i++;
	}
	new[j] = '\0';
	return (new);
}

// int main()
//{
//	char word1[] = "hello world";
//	int start = 3;
//	size_t len = strlen(word1) - start;

//	char *result = ft_substr(word1, start, len);
//	printf("%s ", result);

//	free(result);

//	return (0);
//}
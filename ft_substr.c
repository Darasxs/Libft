/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 16:21:08 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/19 19:41:27 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//size_t	ft_strlen(const char *s)
//{
//	size_t	len;

//	len = 0;
//	while (s[len] != '\0')
//	{
//		len++;
//	}
//	return (len);
//}
//char	*ft_strdup(const char *s1)
//{
//	char	*str;
//	size_t	i;

//	i = 0;
//	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
//	if (str == NULL)
//		return (NULL);
//	while (s1[i] != '\0')
//	{
//		str[i] = s1[i];
//		i++;
//	}
//	str[i] = '\0';
//	return (str);
//}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new;

	i = 0;
	j = 0;
	if (s == NULL || start > ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
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
//	int start = 5;
//	size_t len = strlen(word1) - start;

//	char *result = ft_substr(word1, start, len);
//	printf("%s ", result);

//	return (0);
//}

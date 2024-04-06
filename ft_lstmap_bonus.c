/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:24:33 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/24 14:47:00 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;
	void	*new_content;

	tmp = lst;
	new = 0;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst != NULL)
	{
		new_content = f(lst->content);
		if (new_content != NULL)
		{
			tmp = ft_lstnew(new_content);
			if (tmp == NULL)
			{
				del(new_content);
				ft_lstclear(&new, del);
				return (0);
			}
			ft_lstadd_back(&new, tmp);
		}
		lst = lst->next;
	}
	return (new);
}

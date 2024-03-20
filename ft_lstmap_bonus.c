/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:24:33 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/20 16:48:57 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *tmp;
	t_list *new;

	tmp = lst;
	new = 0;

	if(lst == NULL)
		return (NULL);

	while(lst != NULL)
	{
		tmp = ft_lstnew(f(lst->content));
		if(tmp == NULL)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst -> next;
	}
	return (new);
}
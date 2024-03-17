/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:47:35 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/03/17 10:22:44 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *tmp;

	tmp = lst;

	while (tmp != NULL)
	{
		(*f)(tmp -> content);
		tmp = tmp -> next;
	}
}
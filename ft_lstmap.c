/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:02:40 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/31 16:57:42 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmp_new;

	if (!lst || !f)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		if (!(tmp_new = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&newlst, del);
			break ;
		}
		ft_lstadd_back(&newlst, tmp_new);
		lst = lst->next;
	}
	return (newlst);
}

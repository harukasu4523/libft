/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 12:16:20 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/30 00:10:22 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*dlst;
	t_list	*keep;

	dlst = *lst;
	while (dlst)
	{
		del(dlst->content);
		keep = dlst;
		dlst = keep->next;
		free(keep);
	}
	*lst = NULL;
}

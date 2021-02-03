/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 09:10:36 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/24 00:44:08 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *pstr;
	unsigned char ch;

	pstr = (unsigned char *)s;
	ch = c;
	while (n--)
	{
		if (*pstr == ch)
		{
			return (pstr);
		}
		pstr++;
	}
	return (NULL);
}

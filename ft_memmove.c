/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 00:00:11 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/31 17:07:44 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *pdst;
	unsigned char *psrc;

	if (!dst && !src)
		return (NULL);
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (pdst > psrc)
	{
		while (len)
		{
			pdst[len - 1] = psrc[len - 1];
			len--;
		}
	}
	else
	{
		while (len)
		{
			*pdst++ = *psrc++;
			len--;
		}
	}
	return (dst);
}

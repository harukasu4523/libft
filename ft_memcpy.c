/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 16:20:58 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/31 16:58:34 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *pdst;
	unsigned char *psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (n)
	{
		*pdst++ = *psrc++;
		n--;
	}
	return (dst);
}

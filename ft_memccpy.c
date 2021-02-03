/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 17:08:37 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/31 16:58:03 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *psrc;
	unsigned char *pdst;

	pdst = dst;
	psrc = (unsigned char *)src;
	while (n--)
	{
		*pdst++ = *psrc;
		if (*psrc == (unsigned char)c)
			return (pdst);
		psrc++;
	}
	return (NULL);
}

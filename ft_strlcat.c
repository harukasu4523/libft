/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 21:32:15 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/31 17:06:39 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t d_len;
	size_t s_len;
	size_t i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = 0;
	if (d_len < dstsize)
	{
		while (dstsize - d_len - 1 > i && src[i])
		{
			dst[d_len + i] = src[i];
			i++;
		}
	}
	dst[i + d_len] = '\0';
	if (d_len >= dstsize)
		return (s_len + dstsize);
	return (s_len + d_len);
}

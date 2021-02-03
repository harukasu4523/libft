/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 20:28:04 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/31 17:04:28 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, char *src, size_t size)
{
	char		*pdst;
	const char	*psrc;
	size_t		i;

	pdst = dest;
	psrc = src;
	i = size;
	if (i != 0)
	{
		while (--i != 0)
		{
			if ((*pdst++ = *psrc++) == '\0')
				break ;
		}
	}
	if (i == 0)
	{
		if (size != 0)
			*pdst = '\0';
	}
	return (ft_strlen(src));
}

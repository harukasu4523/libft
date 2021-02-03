/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 20:37:56 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/31 17:08:39 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		n_size;

	n_size = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (len)
	{
		if (ft_memcmp(haystack, needle, n_size) == 0 && n_size <= len)
			return ((char *)haystack);
		len--;
		haystack++;
		if (haystack == '\0')
			break ;
	}
	return (NULL);
}

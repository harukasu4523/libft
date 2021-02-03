/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 12:56:02 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/31 17:12:54 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		if (!(result = (char *)malloc(sizeof(char) * 1)))
			return (NULL);
		*result = '\0';
		return (result);
	}
	len = (len < ft_strlen(s) - start ? len : ft_strlen(s));
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	(void)ft_strlcpy(result, (char*)s + start, len + 1);
	return (result);
}

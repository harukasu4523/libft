/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 13:06:00 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/24 00:34:02 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*result;
	unsigned int	i;

	i = ft_strlen(s) + 1;
	result = NULL;
	while (i--)
	{
		if (*s == c)
		{
			result = (char *)s;
		}
		s++;
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 12:37:44 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/24 00:15:46 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int i;

	i = ft_strlen(s) + 1;
	while (i)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
		i--;
	}
	return (NULL);
}

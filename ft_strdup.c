/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 16:50:37 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/24 00:42:11 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int len;
	char*p;
	char*s_cpy;

	len = ft_strlen(s1);
	s_cpy = malloc(sizeof(char) * (len + 1));
	if (!s_cpy)
	{
		return (NULL);
	}
	else
	{
		p = s_cpy;
		while (*s1)
		{
			*p++ = *s1++;
		}
		*p = '\0';
		return (s_cpy);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:45:28 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/30 12:45:53 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*pstr;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (!*s1)
	{
		if (!(pstr = malloc(sizeof(char *))))
			return (NULL);
		*pstr = '\0';
		return (pstr);
	}
	pstr = (char *)s1;
	while (*(s1 + 1))
		s1++;
	while (ft_strchr(set, *s1))
		s1--;
	return (ft_substr(pstr, 0, s1 - pstr + 1));
}

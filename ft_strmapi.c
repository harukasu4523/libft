/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 16:03:35 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/24 00:39:21 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ps;

	i = 0;
	ps = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ps)
		return (NULL);
	while (s[i])
	{
		ps[i] = (*f)(i, s[i]);
		i++;
	}
	ps[i] = '\0';
	return (ps);
}

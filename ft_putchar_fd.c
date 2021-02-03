/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 23:45:30 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/24 00:37:50 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char c1;
	unsigned char b1;
	unsigned char b2;

	if ((unsigned char)c <= 127)
		write(fd, &c, 1);
	else
	{
		c1 = c;
		b1 = ((c1 & 0b11000000) >> 6) | 0b11000000;
		b2 = (c1 & 0b00111111) | 0b10000000;
		write(fd, &b1, 1);
		write(fd, &b2, 1);
	}
}

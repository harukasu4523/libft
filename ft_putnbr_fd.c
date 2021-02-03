/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 15:20:01 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/24 00:16:28 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_num(unsigned int num, int fd)
{
	char	c;

	if (num / 10 == 0)
	{
		c = num % 10 + '0';
		write(fd, &c, 1);
		return ;
	}
	print_num(num / 10, fd);
	c = num % 10 + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	num = n;
	if (n < 0)
	{
		num = n * -1;
		write(fd, "-", 1);
	}
	print_num(num, fd);
}

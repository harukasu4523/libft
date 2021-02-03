/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiwata <hiwata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:52:36 by hiwata            #+#    #+#             */
/*   Updated: 2020/10/31 17:12:21 by hiwata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			is_digit(size_t n)
{
	size_t		digit;

	digit = 0;
	while (n != 0)
	{
		digit++;
		n /= 10;
	}
	return (digit);
}

static void		set_num(char *result, size_t num, size_t digit)
{
	if (num == 0)
		result[0] = '0';
	while (num)
	{
		result[digit - 1] = num % 10 + '0';
		digit--;
		num /= 10;
	}
}

char			*ft_itoa(int n)
{
	size_t			digit;
	int				sign;
	unsigned int	num;
	char			*result;

	sign = (n < 0 ? -1 : 1);
	num = n * sign;
	digit = is_digit(num);
	if (sign == -1 || digit == 0)
		digit++;
	if (!(result = malloc(sizeof(char) * (digit + 1))))
		return (NULL);
	set_num(result, num, digit);
	if (sign == -1)
		result[0] = '-';
	result[digit] = '\0';
	return (result);
}

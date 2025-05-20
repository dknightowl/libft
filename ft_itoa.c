/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhoo <dkhoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:12:51 by dkhoo             #+#    #+#             */
/*   Updated: 2025/05/15 14:06:59 by dkhoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
	Allocates memory (using malloc(3)) and returns a string
	representing the integer received as an argument. Negative
	numbers must be handled.
Return value:
	The converted string value or NULL if the conversion failed
*/

static int	ft_intlen(long n)
{
	int		i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		n = -n;
		i += 1;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	ln;
	char	*num_str;
	size_t	num_len;

	ln = (long) n;
	num_len = ft_intlen(ln) + 1;
	num_str = (char *) malloc(num_len);
	if (!num_str)
		return ((char *) NULL);
	num_str[num_len - 1] = '\0';
	num_len -= 1;
	if (ln == 0)
		num_str[0] = '0';
	if (ln < 0)
	{
		ln = -ln;
		num_str[0] = '-';
	}
	while (ln > 0)
	{
		num_str[num_len - 1] = '0' + (ln % 10);
		ln /= 10;
		num_len--;
	}
	return (num_str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhoo <dkhoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 11:35:55 by dkhoo             #+#    #+#             */
/*   Updated: 2025/07/11 12:39:50 by dkhoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra.h"

/**
	@brief Custom implementation strtol. Converts string to long int

	@param str Pointer to null-terminated byte string to be interpreted
	that represents an integral number
	@param endptr Pointer to an object of type `char` - whose value is set by
	the function to the next character in str after the numerical value; Can
	also be a null pointer - in which case it is not used
	@param base Numerical base (radix) that determines the valid characters
	and their interpretation; If this is 0, based used it determined by the
	format in the sequence.

	@return Upon success, returns the converted integral number as a long int.
	If no valid conversion could be performed, a zero value is returned (0L).
*/

long	ft_strtol(const char *str, char **endptr, int base)
{
	const char	*strptr;
	long		result;
	int			sign;
	int			digit;

	strptr = str;
	result = 0;
	sign = 1;

	while (*strptr == ' ' || (*strptr >= 9 && *strptr <= 13))
		strptr++;

	if (*strptr == '-' || *strptr == '+')
	{
		if (*strptr == '-')
			sign = -1;
		strptr++;
	}

	if (base == 0)
	{
		if (*(strptr + 1) == 'x' || *(strptr + 1) == 'X')
		{
			base = 16;
			strptr += 2;
		}
		else if (*strptr == '0')
		{
			base = 8;
			strptr += 1;
		}
		else
			base = 10;
	}

	else if (base == 16)
	{
		if (*strptr == '0' && (*(strptr + 1) == 'x' || *(strptr) == 'X'))
			strptr += 2;
	}

	while (1)
	{
		if (ft_isdigit(*strptr))
			digit = *strptr - '0';
		else if (ft_islower(*strptr))
			digit = *strptr - 'a' + 10;
		else if (ft_isupper(*strptr))
			digit = *strptr - 'A' + 10;
		else
			break ;

		if (digit >= base)
			break ;

		result *= base;
		result += digit;
		strptr++;
	}

	if (endptr)
		*endptr = (char *) strptr;

	return (result * sign);
}

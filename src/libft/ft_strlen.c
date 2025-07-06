/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhoo <dkhoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:46:12 by dkhoo             #+#    #+#             */
/*   Updated: 2025/06/27 02:39:47 by dkhoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
	@brief Calculates the length of the string pointed to by
	's', excluding the terminating null byte ('\0')

	@param s String to calculate the length of

	@return Number of characters in 's', excluding the
	null byte
*/
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (len);
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

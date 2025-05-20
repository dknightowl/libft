/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhoo <dkhoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:00:39 by dkhoo             #+#    #+#             */
/*   Updated: 2025/05/16 11:42:00 by dkhoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
	Fills the first len bytes of the memory area
	pointed to by dest with the constant byte ch
Return value:
	Pointer to the memory area dest
*/

void	*ft_memset(void *dest, int ch, size_t len)
{
	char	*dest_ptr;

	dest_ptr = (char *) dest;
	while (len > 0)
	{
		*dest_ptr = (char) ch;
		dest_ptr++;
		len--;
	}
	return (dest);
}

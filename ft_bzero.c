/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhoo <dkhoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:24:02 by dkhoo             #+#    #+#             */
/*   Updated: 2025/05/08 10:39:22 by dkhoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
	Erases the data in the n bytes of the memory
	starting at the location pointed to by s, by
	writing zeros (bytes containing '\0') to that area.
Return value:
	None.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

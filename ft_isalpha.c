/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhoo <dkhoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:05:55 by dkhoo             #+#    #+#             */
/*   Updated: 2025/05/09 09:50:16 by dkhoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
	Checks for an alphabetic character; in the standard "C" locale,
	it is equivalent to (isupper(c) ||  islower(c)). In some locales,
	there may be additional characters for which isalpha() is
	true—letters which are neither uppercase nor lowercase.
Return value:
	Nonzero if the character c falls into the
	tested class, and zero if not
*/

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

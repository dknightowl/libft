/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free2d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhoo <dkhoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:14:25 by dkhoo             #+#    #+#             */
/*   Updated: 2025/09/02 16:23:10 by dkhoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra.h"

/**
	@brief Frees a NULL-terminated dynamically-allocated 2D array.

	Iterates through a NULL-termianted array of pointers, frees each allocated
	element, then frees the array itself

	@param arr NULL-terminated array of allocated pointers. If NULL is passed,
	nothing is done
*/
void	ft_free2d(void **arr)
{
	void	**tmp;

	if (!arr)
		return ;
	tmp = arr;
	while (*tmp)
	{
		free(*tmp);
		tmp++;
	}
	free(arr);
}

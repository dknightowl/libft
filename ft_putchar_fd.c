/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhoo <dkhoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:11:04 by dkhoo             #+#    #+#             */
/*   Updated: 2025/05/10 17:50:08 by dkhoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
	Outputs the character ’c’ to the specified file
	descriptor.
Return value:
	None.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

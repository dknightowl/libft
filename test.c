/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhoo <dkhoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 21:18:39 by dkhoo             #+#    #+#             */
/*   Updated: 2025/06/27 02:26:52 by dkhoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include "includes/get_next_line_bonus.h"
#include "includes/test.h"

int	main(void)
{
	int		fd;
	char	*s;
	int		i;

	printf("%lu\n", ft_strlen("ABC123"));

	fd = open("test.c", O_RDONLY);

	if (fd < 0)
	{
		perror("open");
		return (1);
	}

	i = 1;
	while (i < 10)
	{
		s = get_next_line(fd);
		printf("[%02d] %s", i, s);
		if (s)
			free(s);
		i++;
	}
	close(fd);
	return (0);
}

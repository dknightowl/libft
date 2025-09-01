/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkhoo <dkhoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 21:18:39 by dkhoo             #+#    #+#             */
/*   Updated: 2025/09/01 15:52:38 by dkhoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extra.h"
#include "includes/libft.h"
#include "includes/get_next_line_bonus.h"
#include "includes/ft_printf.h"
#include "includes/test.h"

int	main(void)
{
	// int		fd;
	// char	*s;
	// int		i;

	// printf("%lu\n", ft_strlen("ABC123"));

	// fd = open("test.c", O_RDONLY);

	// if (fd < 0)
	// {
	// 	perror("open");
	// 	return (1);
	// }

	// i = 1;
	// while (i < 10)
	// {
	// 	s = get_next_line(fd);
	// 	printf("[%02d] %s", i, s);
	// 	if (s)
	// 		free(s);
	// 	i++;
	// }
	// close(fd);

	// ft_printf("hello ft_printf");

	// printf("ft_islower: %d\n", ft_islower('a'));

	// const char *str = "123456789";
	// char *endptr;
	// long int num;

	// num = ft_strtol(str, &endptr, 10);
	// if (endptr == str)
	// 	printf("no digits were found\n");
	// else if (*endptr != '\0')
	// 	printf("invalid character: %c\n", *endptr);
	// else
	// 	printf("the number is: %ld\n", num);

	printf("isspace: %d, %d\n", ft_isspace(' '), ft_isspace('A'));

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elichan < elichan@student.42.fr >          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:59:46 by elichan           #+#    #+#             */
/*   Updated: 2024/02/14 14:49:54 by elichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				ft_putchar(av[1][i] + 32);
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				ft_putchar(av[1][i] - 32);
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}

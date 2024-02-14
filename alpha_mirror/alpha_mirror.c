/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elichan < elichan@student.42.fr >          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:29:42 by elichan           #+#    #+#             */
/*   Updated: 2024/02/14 14:50:54 by elichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar('z' - (str[i] - 'a'));
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar('Z' - (str[i] - 'A'));
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
		alpha_mirror(av[1]);
	write (1, "\n", 1);
	return (0);
}

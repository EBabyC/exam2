/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elichan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:26:07 by elichan           #+#    #+#             */
/*   Updated: 2024/03/01 15:26:20 by elichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c )
{
	write(1, &c, 1);
}

char	aff_a(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] == 'a')
			putchar('a');
		i++;
	}
	putchar('\n');
	return (*str);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		aff_a(av[1]);
	else
	{
		putchar('a');
		putchar('\n');
	}
	return (0);
}


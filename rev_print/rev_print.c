/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elichan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:49:03 by elichan           #+#    #+#             */
/*   Updated: 2024/03/01 15:55:29 by elichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac ==2)
	{
		while(av[1][i])
			i++;
		while (i >= 0)
			putchar(av[1][--i]);
	}
	putchar('\n');
	return (0);
}

	

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elichan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:28:46 by elichan           #+#    #+#             */
/*   Updated: 2024/01/02 16:44:31 by elichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isblank(char c)
{
	return (c == ' ' || c == '\t');
}

void	rostring(char *s)
{
	int	i;
	int	first_word_lenght;

	i = 0;
	first_word_lenght = 0;
	while (s[i])
	{
		while (ft_isblank(s[i]))
		i++;
		if (s[i] && !ft_isblank(s[i]))
		{
			if (first_word_lenght == 0)
				while (s[i] && !ft_isblank(s[i++]))
					first_word_lenght++;
			else
			{
				while (s[i] && !ft_isblank(s[i]) && write (1, &s[i++], 1));
				write (1, " ", 1);
			}
		}
	}
	i = 0;
	while (ft_isblank(s[i]))
		i++;
	while (first_word_lenght--)
		write(1, &s[i++],1);
}

int	main(int ac, char **av)
{
	if (ac > 1 && *av[1])
		rostring(av[1]);
	write (1, "\n", 1);
	return (0);
}




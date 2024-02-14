/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elichan < elichan@student.42.fr >          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:03:18 by elichan           #+#    #+#             */
/*   Updated: 2024/02/14 14:42:36 by elichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_sep(char c)
{
	if (c == '\t' || c == '\n'
		|| c == ' ' || c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

void	ft_str_capitalizer(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		ft_putchar(str[0] - 32);
	else
		ft_putchar(str[0]);
	i = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& is_sep(str[i - 1]))
			ft_putchar(str[i] - 32);
		else if ((str[i] >= 'A' && str[i] <= 'Z')
			&& !is_sep(str[i - 1]))
			ft_putchar(str[i] + 32);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_str_capitalizer(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}		

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elichan < elichan@student.42.fr >          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:36:23 by elichan           #+#    #+#             */
/*   Updated: 2023/12/29 15:58:16 by elichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int n)
{
	if (n > 9)
		ft_write_number(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main(void)
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (nb % 3 == 0)
			write(1, "fizz", 4);
		else if (nb % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_write_number(nb);
		write(1, "\n", 1);
		nb++;
	}
	return (0);
}

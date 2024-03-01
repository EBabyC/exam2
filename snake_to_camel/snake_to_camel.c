/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elichan < elichan@student.42.fr >          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:03:03 by elichan           #+#    #+#             */
/*   Updated: 2024/02/27 16:25:55 by elichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

int     isLower(int c)
{
    return (c >= 'a' && c <= 'z');
}

int     toUpper(int c)
{
    if (isLower(c))
        return (c - 32);
    return (c);
}

int     main(int ac, char **av)
{
    if (ac != 2)
    {
        putchar('\n');
        return (0);
    }
    int     i;

    i = 0;
    while (av[1][i])
    {
        if (av[1][i] == '_')
        {	
        i++;
        putchar(toUpper(av[1][i]));
        }
        else 
            putchar(av[1][i]);
        i++;
    }
    putchar('\n');
    return (0);
}

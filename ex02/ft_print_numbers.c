/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bezikhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 09:35:59 by bezikhal          #+#    #+#             */
/*   Updated: 2020/07/09 10:17:47 by bezikhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_print_numbers()
{
    char digit;
    digit = '0';
    while (digit <= '9')
    {
        ft_putchar(digit);
        digit++;
    }
}


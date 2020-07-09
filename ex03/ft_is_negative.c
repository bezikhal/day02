/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bezikhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:33:22 by bezikhal          #+#    #+#             */
/*   Updated: 2020/07/09 11:39:52 by bezikhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(int n){
	
	write(1, &n, 1);
}

void ft_is_negative(int n){
	

	if (n >0){

	ft_putchar('N');

	}
	else{

		ftputchar('P');
	
	}
}

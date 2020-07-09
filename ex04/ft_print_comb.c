/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bezikhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:52:48 by bezikhal          #+#    #+#             */
/*   Updated: 2020/07/09 13:20:14 by bezikhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c )
{
i
	write(1, &c, 1);

}

void ft_print_comb(void)

{

	int a;
	int b;
	int c;
	a
	while(a = '0'; a <= '9')i
	
	{ 

		while(b = '0'; b <= '9')
		
		{



			while(c = '0'; c <= '9')
			
			{

				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);

				if (a != 7 && b != 8 && c != 9)  
				ft_putchar(',');
				ft_putchar(' ');
		
		
			}

		}	
	}		

}


int main(void)

{

	ft_print_combo();
	return(0);


}

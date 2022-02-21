/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:36:58 by ralvaro           #+#    #+#             */
/*   Updated: 2022/01/27 16:01:47 by ralvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
/*
int	main(void)
{
	printf("should be 2147483647\n");
	ft_putnbr(2147483647);
	printf("\nshould be -2147483647\n");
	ft_putnbr(-2147483647);
	printf("\n should be 0\n");
	ft_putnbr(0);
	printf("\nshould be 1\n");
	ft_putnbr(1);
	printf("\nshould be 42\n");
	ft_putnbr(42);
	printf("\n");
	return (0);
}*/

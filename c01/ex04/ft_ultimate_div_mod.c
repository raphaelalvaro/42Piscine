/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:13:53 by ralvaro           #+#    #+#             */
/*   Updated: 2022/01/20 17:28:18 by ralvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}
/*
int	main(void)
{
	int a = 25;
	int b = 7;
	int *pa = &a;
	int *pb = &b;

	ft_ultimate_div_mod(pa, pb);

	printf("%d\n%d\n", a, b);
	return (0);
}*/

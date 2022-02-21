/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:35:57 by ralvaro           #+#    #+#             */
/*   Updated: 2022/01/20 16:46:30 by ralvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	a =	5;
	int b = 10;
	int *pa = &a;
	int *pb = &b;

	ft_swap(pa, pb);

	printf("%d\n%d\n", a, b);
	return(0);
}*/

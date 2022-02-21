/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:28:07 by ralvaro           #+#    #+#             */
/*   Updated: 2022/01/31 16:31:52 by ralvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	res = (int *) malloc (sizeof(int) * (max - min));
	while (i < max - min)
	{
		res[i] = i + min;
		i++;
	}
	return (res);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
	{
		*range = 0;
		return (0);
	}
	return (max - min);
}
/*
int	main(void)
{
	int size;
	int *test;
	int min;
	int max;

	min = -10;
	max = 10;

	size = ft_ultimate_range(&test, min, max);
	printf("\nsize = %d\n", size);
}*/
